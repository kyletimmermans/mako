#include "stdlib.h"
#include "PcapLiveDeviceList.h"

int main()
{
	std::string interfaceIPAddr = "192.168.1.46";

	pcpp::PcapLiveDevice* dev = pcpp::PcapLiveDeviceList::getInstance().getPcapLiveDeviceByIp(interfaceIPAddr.c_str());
	
	if (dev == NULL)
	{
   		printf("Cannot find interface with IPv4 address of '%s'\n", interfaceIPAddr.c_str());
   		exit(1);
	}

	printf("Interface info:\n");
	printf("   Interface name:        %s\n", dev->getName().c_str());
	printf("   Interface description: %s\n", dev->getDesc().c_str());
	printf("   MAC address:           %s\n", dev->getMacAddress().toString().c_str());
	printf("   Default gateway:       %s\n", dev->getDefaultGateway().toString().c_str());
	printf("   Interface MTU:         %d\n", dev->getMtu());
	if (dev->getDnsServers().size() > 0)
	    printf("   DNS server:            %s\n", dev->getDnsServers().at(0).toString().c_str());
	
	return 0;
}