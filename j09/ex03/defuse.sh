#!/bin/sh
stat -r bomb.txt | cut -d ' ' -f9 | awk '{ SUM = 60 + $0} END { print SUM }'
