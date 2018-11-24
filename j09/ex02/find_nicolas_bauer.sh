#!/bin/sh
cat contacts_hard.txt| grep -i --colour "nicolas\tbauer*" | grep -oE --colour "\(?\d{3}[\)-]?\d{3}-\d+"
