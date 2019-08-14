
Debian
====================
This directory contains files used to package presalecoinstored/presalecoinstore-qt
for Debian-based Linux systems. If you compile presalecoinstored/presalecoinstore-qt yourself, there are some useful files here.

## presalecoinstore: URI support ##


presalecoinstore-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install presalecoinstore-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your presalecoinstore-qt binary to `/usr/bin`
and the `../../share/pixmaps/presalecoinstore128.png` to `/usr/share/pixmaps`

presalecoinstore-qt.protocol (KDE)

