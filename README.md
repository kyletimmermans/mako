![Version 1.0](http://img.shields.io/badge/version-v1.0-orange.svg)
![C++17](https://img.shields.io/badge/C++-17-F44B7D.svg)
![PcapPlusPlus21.05](https://img.shields.io/badge/PcapPlusPlus-21.05-lightblue.svg)
![Latest commit](https://img.shields.io/github/last-commit/kyletimmermans/mako)
![Latest Release Date](https://img.shields.io/github/release-date/kyletimmermans/mako?color=darkgreen)
[![kyletimmermans Twitter](http://img.shields.io/twitter/url/http/shields.io.svg?style=social&label=Follow)](https://twitter.com/kyletimmermans)

# <div align="center">Mako</div>

Wireshark for Bash Terminal

**Setup**
<div>Menu: (each option can go back to menu)</div>
<div>&ensp;&ensp;Start sniffing</div>
<div>&ensp;&ensp;&ensp;Chose interface and start (list possible interfaces)</div>
<div>&ensp;&ensp;&ensp;&ensp;No.&ensp;Time&ensp; Source&ensp;Destination&ensp;Protocol&ensp;Ports&ensp;Length&ensp;Info</div>
<div>&ensp;&ensp;&ensp;&ensp;Press q to quit</div>
<div>&ensp;&ensp;&ensp;&ensp;&ensp;On quit, save pcap file to home dir</div>
<div>&ensp;</div>
<div>Different foreground and background colors for protocols, normal packet, and errors: https://www.wireshark.org/docs/wsug_html_chunked/ChCustColorizationSection.html#ChCustColoringRulesDialog</div>
<div>&ensp;</div>
<div>Dynamic screen (See clearScreenAndWrite.sh file above): https://stackoverflow.com/questions/31156508/bash-dynamic-command-line-output/31156977</div>
<div>&ensp;&ensp;Use this to run bash commands in C++ - https://stackoverflow.com/a/646225/11200327</div>
<div>&ensp;</div>
<div>&ensp;</div>
<div>ASCII Art Mako Shark (first shark): http://www.ascii-art.de/ascii/s/sharks.txt</div>
<div>&ensp;</div>
<div>To get network interfaces use `ifconfig -a' for mac and for linux use `ip link show` and then awk for both to cut out all available network interfaces</div>
<div>&ensp;&ensp;To get OS use `uname`</div>
<div>&ensp;&ensp;To store system command result in C++: https://stackoverflow.com/a/5919644/11200327</div>
<div>&ensp;</div>
<div>See Makefile, tabs must be present, use vi for tabbing (check with: cat -e -t -v Makefile)</div>


### ToDo
- [ ] Usage with -h (argc in main parameters and include usage())
- [ ] Install instructions (Put in /usr/bin with wget command and chmod should be -rwxr-xr-x)
  - [ ] If no access to /bin/bash put in home and .bashrc or .zshrc or whatever settings they have for their terminal should include `alias mako="currentDir=$PWD && cd /Users/$USER && ./mako && cd $currentDir"`
- [ ] Use OOP and Classes
- [ ] Give it correct permissions to run correctly the first time
