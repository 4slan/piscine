#!/bin/sh
groups $FT_USER | sed -E 's/ /,/g' | tr -d '\n'
