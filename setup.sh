#! /bin/sh

export HM_CUBE_VERSION=`grep "define HM__CUBE__VERSION" main/hm_cube_version.h | awk -F "\"" '{print $2}'`
