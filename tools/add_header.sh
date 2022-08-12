#!/bin/bash

if [ "$#" -ne 2 ]; then
  echo "Usage: $0 <source file> <header file>"
  exit 1
fi

grep -- '//--- END HEADER ---' $1 > /dev/null
if [ $? == 0 ]; then
  echo "Removing old header $1"
  perl -0777 -p -i -e 's/^.*--- END HEADER ---\n*//s' $1
fi

cat $2 /dev/stdin $1 > $1_ <<EOI
//--- END HEADER ---

EOI
mv -f $1_ $1

