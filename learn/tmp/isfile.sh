#!/bin/bash
if [ $# -lt 1 ]; then
  echo "Usage: $0 FILE"
elif [ -f $1 ]; then
  if [ -x $1 ]; then
    echo "$1 is an executable"
  else
    echo "$1 is an file"
  fi
elif [ -d $1 ]; then
  echo "$1 is a directory"
fi
