#!/bin/bash

testuser=aniruddha
if grep $testuser /etc/passwd
then
echo The bash files for user $testuser are:
ls -a /home/$testuser/.b*
fi
