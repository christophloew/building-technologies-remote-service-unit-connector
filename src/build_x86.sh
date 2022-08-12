#!/bin/bash

full_path=$(realpath $0) 
BASEDIR=$(dirname $full_path)
echo "Script dir $BASEDIR"
export STAGING_DIR=/openwrt/staging_dir/target-x86_64_musl/

mkdir -p buildX64
cd buildX64

cmake -DCMAKE_TOOLCHAIN_FILE=$BASEDIR/cmake/x86_64-openwrt-toolchain.cmake \
      -DCMAKE_BUILD_TYPE=Debug \
      $BASEDIR
make VERBOSE=yes $@
