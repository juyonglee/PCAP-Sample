#include <iostream>
#include <pcap/pcap.h>
#define PCAP_ERR_BUF_SIZE 1024 * 1024

int main() {
    char errbuf[PCAP_ERR_BUF_SIZE];
    if (pcap_init(PCAP_CHAR_ENC_UTF_8, errbuf)) {
        std::cout << "PCAP Init Fail!" << std::endl;
        std::cout << errbuf << std::endl;
    }
    return 0;
}
