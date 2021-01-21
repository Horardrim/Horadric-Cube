#! /bin/sh

CONTROL_FILE="../Horadric-Cube-$HM_CUBE_VERSION/DEBIAN/control"

echo "Package: Horadric-Cube" >> $CONTROL_FILE
echo "Version: $HM_CUBE_VERSION" >> $CONTROL_FILE
echo "Section: utils" >> $CONTROL_FILE
echo "Priority: optional" >> $CONTROL_FILE
echo "Architecture: amd64" >> $CONTROL_FILE
echo "Maintainer: Deckard Cain@Horadrim" >> $CONTROL_FILE
echo "Description: This package is a demostration for github actions" >> $CONTROL_FILE
