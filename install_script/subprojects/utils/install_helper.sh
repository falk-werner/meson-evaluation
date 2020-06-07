#!/bin/sh

echo "MESON_SOURCE_ROOT: ${MESON_SOURCE_ROOT}"
echo cp ${MESON_SOURCE_ROOT}/utils.conf ${MESON_INSTALL_DESTDIR_PREFIX}/etc/utils.conf
cp ${MESON_SOURCE_ROOT}/utils.conf ${MESON_INSTALL_DESTDIR_PREFIX}/etc/utils.conf