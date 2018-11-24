#!/bin/sh
ifconfig | grep -oE '(..\:){5}..'
