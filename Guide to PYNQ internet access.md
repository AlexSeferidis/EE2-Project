### Connecting PC to PYNQ
##### Windows
- Enable network sharing on WiFi adapter
- Set static IP of Ethernet adapter to `192.168.137.1`
- Let DNS of Ethernet adapter be automatic
##### PYNQ
- PuTTY into PYNQ and use `ifconfig`
- If `eth0` does not list an IPv4 address, restart network sharing on Windows WiFi adapter
- Once IPv4 listed, the Windows ethernet adapter is visible and the internet should be available
	- Jupyter can be accessed on google by accessing `http://<listed_ip_in_PuTTY>
- Attempt `ping google.com`
- If `Temporary failure in name resolution`, check DNS settings on the PYQN with `resolvectl status` and add DNS config appropriately