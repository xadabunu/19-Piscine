#!/bin/bash

git clone -q git@vogsphere-v2.s19.be:vogsphere/intra-uuid-5858cfbd-e741-491b-9c35-30ce0f3fd37d-4210196-xadabunu mondossier
cd mondossier
git log -n 5 --format=%H
