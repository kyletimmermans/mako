![Version 1.0](http://img.shields.io/badge/version-v1.0-orange.svg)
![C++17](https://img.shields.io/badge/C++-17-F44B7D.svg)
![Latest commit](https://img.shields.io/github/last-commit/kyletimmermans/mako?color=lightblue)
![Latest Release Date](https://img.shields.io/github/release-date/kyletimmermans/mako?color=darkgreen)
[![kyletimmermans Twitter](http://img.shields.io/twitter/url/http/shields.io.svg?style=social&label=Follow)](https://twitter.com/kyletimmermans)

# <div align="center">Mako</div>

Wireshark for Bash Terminal

**Setup**
<div>Menu: (each option can go back to menu)</div>
<div>&ensp;&ensp;Start sniffing</div>
<div>&ensp;&ensp;&ensp;Chose interface and start (list possible interfaces)</div>
<div>&ensp;&ensp;&ensp;&ensp;No.&ensp;Time&ensp; Source&ensp;Destination&ensp;Length&ensp;Protocol&ensp;Info</div>
<div>&ensp;&ensp;&ensp;&ensp;Press q to quit</div>
<div>&ensp;&ensp;&ensp;&ensp;&ensp;On quit, save pcap file to home dir</div>
<div>&ensp;</div>
<div>Different foreground and background colors for protocols, normal packet, and errors: https://www.wireshark.org/docs/wsug_html_chunked/ChCustColorizationSection.html#ChCustColoringRulesDialog</div>
<div>&ensp;</div>
<div>Dynamic screen (See clearScreenAndWrite.sh file above): https://stackoverflow.com/questions/31156508/bash-dynamic-command-line-output/31156977</div>
<div>&ensp;&ensp;Use this to run bash commands in C++ - https://stackoverflow.com/a/646225/11200327</div>
<div>&ensp;</div>
<div>C++ packet sniffing library: http://libtins.github.io/</div>
<div>&ensp;</div>
<div>ASCII Art Mako Shark (first shark): http://www.ascii-art.de/ascii/s/sharks.txt</div>
<div>&ensp;</div>
<div>To get network interfaces use `ifconfig -a' for mac and for linux use `ip link show` and then awk for both to cut out all available network interfaces</div>
<div>&ensp;&ensp;To get OS use `uname`</div>
<div>&ensp;&ensp;To store system command result in C++: https://stackoverflow.com/a/5919644/11200327</div>
<div>&ensp;</div>
<div>cin menu with prompt "=>"</div>
<div>&ensp;&ensp;[1] Start sniffing</div>
<div>&ensp;&ensp;[2] Usage/Help</div>
<div>&ensp;&ensp;[3] About</div>
<div>&ensp;</div>
<div>packet_info.txt contains 1 duplicate for all info types</div>
<div>&ensp;&ensp;Hash map for all info types?</div>
<div>&ensp;</div>
<div>Packet Info:</div>
<div>&ensp;TCP:</div>
<div>&ensp;&ensp;[ TCP error ]</div>
<div>&ensp;&ensp;src_port_num → dest_port_num</div>
<div>&ensp;&ensp;[FIN or ACK or both with comma or just RST]</div>
<div>&ensp;&ensp;Seq= Ack= Win= Len= TSval= TSecr=</div>
<div>&ensp;UDP:</div>
<div>&ensp;&ensp;src_port_num → dest_port_num Len=</div>
<div>&ensp;TLSv1.2:</div>
<div>&ensp;&ensp;Applciation Data</div>




### ToDo
- [ ] Usage with -h
- [ ] Install instructions (Put in /usr/bin with wget command and chmod should be -rwxr-xr-x)
  - [ ] If no access to /bin/bash put in home and .bashrc or .zshrc or whatever settings they have for their terminal should include `alias mako="currentDir=$PWD && cd /Users/$USER && ./mako && cd $currentDir"`
- [ ] Make sure to use `-std=c++17` with g++
- [ ] Use OOP and Classes
