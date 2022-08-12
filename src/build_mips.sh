#!/bin/bash

full_path=$(realpath $0) 
BASEDIR=$(dirname $full_path)
echo "Script dir $BASEDIR"
export STAGING_DIR=/openwrt/staging_dir/target-mips_24kc_musl/

mkdir -p buildMips
cd buildMips

cmake -DCMAKE_TOOLCHAIN_FILE=$BASEDIR/cmake/mips-openwrt-toolchain.cmake \
      $BASEDIR
make VERBOSE=yes $@
