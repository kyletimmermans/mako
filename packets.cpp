/*
    ToDo: 
        -Write infinitely instead of vector
        -Start clock for 'Time'
        -Info field
        -Fix formatting so info matches title
        -Keep titles on screen always
*/

#include <vector>
#include <iostream>
#include <tins/tins.h>

using namespace Tins;

int main() {

    std::vector<Packet> vt;

    std::cout << "No.   "  << "Time    " << "Source  "  << "Destination  " << "Protocol  " << "Length   " << "Info" << std::endl;
    
    int counter = 0;

    Sniffer sniffer("en0");
    while (vt.size() != 10) {
        // next_packet returns a PtrPacket, which can be implicitly converted to Packet.
        vt.push_back(sniffer.next_packet());
    }
    // Done, now let's check the packets
    for (const auto& packet : vt) {
        ++counter;  // Go to next packet number
        if (packet.pdu()->find_pdu<TCP>()) {
            // Get TCP info on packet
            //std::cout << packet.pdu()->rfind_pdu<TCP>().flags() << std::endl;
            std::cout << counter << "  "
                      << packet.pdu()->rfind_pdu<IP>().src_addr() << "  "
                      << packet.pdu()->rfind_pdu<IP>().dst_addr() << "  "
                      << "TCP" << "  "
                      << packet.pdu()->rfind_pdu<TCP>().window() << "  "
                      << packet.pdu()->rfind_pdu<TCP>().sport() << " → " << packet.pdu()->rfind_pdu<TCP>().sport()
                      << std::endl;
        }
    }
}
