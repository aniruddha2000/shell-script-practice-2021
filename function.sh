#!/bin/sh

hello() {
    echo "Hello $1"
    return 10
}

hello Aniruddha

ret=$?
echo "$ret"
