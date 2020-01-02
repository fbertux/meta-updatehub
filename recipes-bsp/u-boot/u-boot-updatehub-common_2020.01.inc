# Copyright (C) 2012-2019 O.S. Systems Software LTDA.
# Released under the MIT license (see COPYING.MIT for the terms)

LICENSE = "GPLv2+"
LIC_FILES_CHKSUM = "file://Licenses/README;md5=30503fd321432fc713238f582193b78e"

SRC_URI = "git://github.com/fbertux/u-boot;branch=${SRCBRANCH}"

SRCREV = "5b07e909280836fd64c3727caaf31969c5f79bcc"
SRCBRANCH = "2020.01+updatehub"

PE = "1"
PV .= "+git${SRCPV}"

S = "${WORKDIR}/git"
