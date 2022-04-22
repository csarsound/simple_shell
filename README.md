# Simple Shell

## flowchart


## Introduction

This repository is the development of a simple Unix Shell **Shell** by Command Line Interface, implemented in C Language, and created by the Authors.

This shell mimics the behaviour of the implemented Unix **Shell /bin/sh** but simple by definition, that is, althought it doesn't contain all functionalities of the original sh, the implemented functions must work in the same way as in the original sh.

The files **needed** to work properly are added in the repository and must be compiled like this:

    gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

Example:



    $ echo "echo 'hello'"| ./hsh
    'hello'
    $

## Description

The `shell` allows the interaction between the operating system and the user by means of instructions after the prompt in a Unix enviroment.
Interactive and non-interactive modes are allowed, meaning, the non-interactive mode, as an execution via the `echo` command.

In the same way:

`ctl D`
`ctl C`
`exit`
`env`
`\t\n`

works properly, in the same way as in sh, and many others edge cases.

## Files Description

## Authors

Juan ballesteros
Cesar Martinez
