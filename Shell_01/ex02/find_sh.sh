#!/bin/sh
find . -type f -iregex ".*\.\sh" -exec basename {} .sh \;
