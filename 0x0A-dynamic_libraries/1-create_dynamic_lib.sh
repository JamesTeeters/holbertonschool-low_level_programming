#!/bin/bash
gcc -c -fipc *.c
gcc *.o -shared -o liball.so
