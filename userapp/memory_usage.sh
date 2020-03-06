#!/bin/bash

MemTotal=$(grep -m 1 "MemTotal" /proc/meminfo | awk '{ print $2 }')
MemFree=$(grep -m 1 "MemFree" /proc/meminfo | awk '{ print $2 }')
MemAvailable=$(grep -m 1 "MemAvailable" /proc/meminfo | awk '{ print $2 }')

Mem_Percentage=$(awk "BEGIN {print ($MemTotal-$MemFree)/$MemTotal*100}")
echo "Memory Usage" $Mem_Percentage "%"

