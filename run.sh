#!/bin/bash

cp blocks.def.h blocks.h
sudo make install
killall dwmblocks
dwmblocks &
