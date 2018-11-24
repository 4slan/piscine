#!/bin/sh
ldapsearch -Q -LLL "(sn=*bon*)" cn | grep cn | wc -l | sed 's/^[ \t]*//'
