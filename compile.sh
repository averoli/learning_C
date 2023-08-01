#!/bin/sh
SOURCE_FILE=$1
READY_FILE="${SOURCE_FILE%.*}.exe"

#echo $SOURCE_FILE
#echo $READY_FILE
gcc -Wall -g $SOURCE_FILE -o $READY_FILE
echo "compiled succesfully now start $READY_FILE"
./$READY_FILE
