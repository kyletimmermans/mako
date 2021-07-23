include /usr/local/etc/PcapPlusPlus.mk

# All Target
all:
	g++ $(PCAPPP_INCLUDES) -c -o packets.o packets.cpp
	g++ $(PCAPPP_LIBS_DIR) -static-libstdc++ -o myPackets packets.o $(PCAPPP_LIBS)
# Clean Target
clean:
	rm packets.o
	rm myPackets
