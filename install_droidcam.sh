#!/bin/bash

# Go to temp folder 
cd /tmp/

# Get the droidcam zip from server
wget -O droidcam_latest.zip https://files.dev47apps.net/linux/droidcam_1.7.2.zip 
# sha1sum: c5154cd85ee4da3b951777dbae156cdb5bea7176

# Unzip the package
unzip droidcam_latest.zip -d droidcam
cd droidcam && ./install-client

# Install dependencies
sudo apt install linux-headers-`uname -r` gcc make

# Install video
sudo ./install-video

