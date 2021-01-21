#! /bin/sh

POSTINST_FILE="../Horadric-Cube-$HM_CUBE_VERSION/DEBIAN/postinst"

echo "#! /bin/sh" >> $POSTINST_FILE
echo "ln -s /usr/lib/cube/libhm-cube-c.so.$HM_CUBE_VERSION /usr/lib/cube/libhm-cube-c.so" >> $POSTINST_FILE
echo "ldconfig" >> $POSTINST_FILE
