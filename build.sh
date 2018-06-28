#!/usr/bin/env bash

cd build
cmake -G Ninja ..
ninja
cd ..