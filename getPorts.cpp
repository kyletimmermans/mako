#include <vector>
#include <tins/tins.h>
#include <iostream>

using namespace Tins;

int main() {
    std::vector<Packet> vt;
    
    Sniffer sniffer("en0");
    while (vt.size() != 10) {
        // next_packet returns a PtrPacket, which can be implicitly converted to Packet.
        vt.push_back(sniffer.next_packet());
    }
    // Done, now let's check the packets
    for (const auto& packet : vt) {
        // Is there an IP PDU somewhere?
        if (packet.pdu()->find_pdu<TCP>()) {
            // Just print timestamp's seconds and IP source address
            std::cout << packet.pdu()->rfind_pdu<TCP>().dport()  
                    << std::endl;
        }
    }
}
