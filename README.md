# QLogic QLGE 10Gb Ethernet Driver for Linux

This driver supports QLogic ISP8XXX 10Gb Ethernet cards. It is based on the
code of the qlge driver which was part of the Linux kernel until v6.6.

This module is meant to work with devices that have the following PCI IDs:
* 1077:8000
* 1077:8012

## Installation

1. Install the [dkms framework](https://github.com/dkms-project/dkms), possibly
   by installing a package for the distribution in use.

2. Install a compilation toolchain and kernel build system for the kernel in
   use. If dkms was installed using a packaging system in the previous step,
   the toolchain and build system might have been installed at the same time
   via dependencies.

3. Build and install the driver module in this repository. Working from the
   root directory of a checked out copy of this repository, run the following:
```
dkms install ./
```

## Uninstallation

First confirm the version of the installed module, for example:
```
# dkms status
qlge/6.7.0-1, 6.6.0+, x86_64: installed
```
In this case, the version of the module is "6.7.0-1".

Then remove the module (replace `<module-version>` by the version shown in the previous
command):
```
dkms remove -m qlge -v <module-version>
```

## Support

Please report problems using the GitHub issue tracker.
