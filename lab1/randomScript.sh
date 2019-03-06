#!/bin/bash
num=0
for((i=1;i<151;i++))
do
num=$(od -An -N4 -i < /dev//urandom)
nums="$num $nums"
done
echo $nums >> file1.txt
