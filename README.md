Install and Build instructions:
1. Download and install the PDSK release am57xx-evm-03.02.00.05 at http://software-dl.ti.com/processor-sdk-linux/esd/AM57X/03_02_00_05/index_FDS.html

2. remove directory < PSDK Install Dir >/example-applications/dual-camera-demo-1.0/
3. Copy libQt5PlatformSupport.a and libqtfreetype.a  from ext_libs to <PSDK Install Dir>/linux-devkit/sysroots/armv7ahf-neon-linux-gnueabi/usr/lib
	From Dual Camera source directory:
		cp ext_libs/* ../../linux-devkit/sysroots/armv7ahf-neon-linux-gnueabi/usr/lib/
4. cd < PSDK Install Dir >/example-applications/
5. git clone https://github.com/gvigelet/dual-camera-demo-1.0.git
6. cd < PSDK Install Dir >
7. make dual-camera-demo
8. copy the executable dual_camera to the targetfs:/usr/bin

Run instructions:
1. Boot up to the OOB Matrix Gui
2. root@am57xx-evm:~# /etc/init.d/matrix-gui-2.0 stop
3. root@am57xx-evm:~# /etc/init.d/weston stop
4. root@am57xx-evm:~# dual_camera -platform eglfs

