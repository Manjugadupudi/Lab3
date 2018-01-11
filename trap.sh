#!/bin/bash
i=1
while [[ i -le 20 ]]
do
 ((N = 2**i))
 ((i = i + 1))
 gcc -o trap trap.c
 ./trap $N

done

