#!/bin/sh
ifconfig -a | grep -v ethernet | grep ether | sed 's/ether//g' | sed 's/[[:space:]]//g'
