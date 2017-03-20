Install and Build instructions:
1. Download and install the PDSK release am57xx-evm-03.02.00.05 at http://software-dl.ti.com/processor-sdk-linux/esd/AM57X/03_02_00_05/index_FDS.html
2. Copy libQt5PlatformSupport.a and libqtfreetype.a to <PSDK Install Dir>/ linux-devkit/sysroots/armv7ahf-neon-linux-gnueabi/usr/lib
3. cd < PSDK Install Dir >/ example-applications/dual-camera-demo-1.0/
4. git apply 0001-dual-camera-demo-enhance-to-work-with-eglfs_kms.patch
5. cd < PSDK Install Dir >
6. make dual-camera-demo
7. copy the executable dual_camera to the targetfs:/usr/bin

Run instructions:
1. Boot up to the OOB Matrix Gui
2. root@am57xx-evm:~# /etc/init.d/matrix-gui-2.0 stop
3. root@am57xx-evm:~# /etc/init.d/weston stop
4. root@am57xx-evm:~# dual_camera -platform eglfs

