#!/bin/bash

BUFFETT="Life is like a snowball. The important thing is finding wet snow and a really long hill."

ISAY=$BUFFETT
change1=${ISAY[@]/snow/foot}
change2=${change1[@]//snow/}
change3=${change2[@]/finding/getting}
loc=`expr index "$change3" 'w'`
ISAY=${change3::$loc+2}

echo "Warren Buffett said:"
echo $BUFFETT
echo "and I say:"
echo "$ISAY"
