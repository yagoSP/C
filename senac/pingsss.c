#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <netinet/ip_icmp.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netdb.h>
#include <errno.h>

// Função para calcular checksum
unsigned short checksum(void *b, int len) {
    unsigned short *buf = b;
    unsigned int sum = 0;
    unsigned short result;

    for (sum = 0; len > 1; len -= 2)
        sum += *buf++;
    if (len == 1)
        sum += *(unsigned char *)buf;
    sum = (sum >> 16) + (sum & 0xFFFF);
    sum += (sum >> 16);
    result = ~sum;
    return result;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <IP_ADDRESS>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    const char *target_ip = argv[1];
    int sockfd;
    struct sockaddr_in addr;
    struct icmp icmp_pkt;
    char packet[sizeof(struct icmp)];
    
    // Cria um socket raw
    if ((sockfd = socket(AF_INET, SOCK_RAW, IPPROTO_ICMP)) < 0) {
        perror("socket");
        exit(EXIT_FAILURE);
    }

    // Configura endereço de destino
    memset(&addr, 0, sizeof(addr));
    addr.sin_family = AF_INET;
    addr.sin_addr.s_addr = inet_addr(target_ip);

    // Configura pacote ICMP
    memset(&icmp_pkt, 0, sizeof(icmp_pkt));
    icmp_pkt.icmp_type = ICMP_ECHO;
    icmp_pkt.icmp_code = 0;
    icmp_pkt.icmp_cksum = 0;
    icmp_pkt.icmp_id = getpid();
    icmp_pkt.icmp_seq = 1;

    // Calcula checksum
    icmp_pkt.icmp_cksum = checksum(&icmp_pkt, sizeof(icmp_pkt));
    memcpy(packet, &icmp_pkt, sizeof(icmp_pkt));

    // Envia pacote
    if (sendto(sockfd, packet, sizeof(packet), 0, (struct sockaddr *)&addr, sizeof(addr)) <= 0) {
        perror("sendto");
        close(sockfd);
        exit(EXIT_FAILURE);
    }

    printf("ICMP packet sent to %s\n", target_ip);

    close(sockfd);
    return 0;
}
