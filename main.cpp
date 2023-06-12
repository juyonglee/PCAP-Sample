#include <iostream>
#include <pcap/pcap.h>
#define PCAP_ERR_BUF_SIZE 1024 * 1024

using namespace std;

int main() {
    char errorBuffer[PCAP_ERR_BUF_SIZE];

    if (pcap_init(PCAP_CHAR_ENC_UTF_8, errorBuffer)) {
        cout << "PCAP Init Fail!" << endl;
        cout << "Error Message: "<< errorBuffer << endl;
    }

    pcap_if_t* alldevsp;

    if (pcap_findalldevs(&alldevsp, errorBuffer)) {
        cout << "Find All Device Fail!" << endl;
        cout << errorBuffer << endl;
    }
    return 0;
}
