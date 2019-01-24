#!/bin/sh
if [ $# -gt 0 ];then
  make TARGET="$1"
else
  make all
fi
echo
echo 
echo "To get artifacts run:"
find /src/obj -maxdepth 1 -type f|sed -e 's/^/docker cp '`hostname`':/' -e 's/$/ ./'



