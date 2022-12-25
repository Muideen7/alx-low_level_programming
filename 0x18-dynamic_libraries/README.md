# C - Dynamic libraries

In this project, learned about using dynamic libraries in C, including how to create
them and how to use them with `$LD_LIBRARY_PATH`, `nm`, `ldd`, and `ldconfig`.

## Technologies
* Scripts written in `Bash 5.1.16(1)`
* C files are compiled using `gcc (Ubuntu 11.2.0-19ubuntu1) 11.2.0`
* C files are written according to the `C90 standard`
* Python script are written in `Python 3.11. 1`
* Tested on `Ubuntu 22.04 LTS`
* Copyright (C) 2021 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

* **0. A library is not a luxury but one of the necessities of life**
  * [libdynamic.so](./libdynamic.so): C dynamic library containing all the functions
  listed below:
  
  
   ## Files
All of the following files are scripts and programs written in C:

| Filename | Description |
| -------- | ----------- |
| `libholberton.s` | Dynamic library that contains many functions |
| `1-create_dynamic_lib.sh` | Shell script that creates a dynamic library |
| `100-operations.so` | Dynamic library that contains mathematical functions |
| `101-make_me_win.sh` | Shell script that injects a C program in order to hack `gm` executable file |
