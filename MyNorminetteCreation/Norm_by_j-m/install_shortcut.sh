#!/bin/bash
echo "Warning, I need all the downloaded files with me for the intallation !";
rm -r ~/Norm_by_jm;
mkdir ~/Norm_by_jm;
cp Normichel ~/Norm_by_jm/;
cp USAGE.txt ~/Norm_by_jm/;
cp .normrc ~/Norm_by_jm/;
grep "source ~/Norm_by_jm/.normrc" ~/.bashrc;
if [ $? = 1 ]; then
    echo "source ~/Norm_by_jm/.normrc" >> ~/.bashrc
    fi
grep "source ~/Norm_by_jm/.normrc" ~/.zshrc;
if [ $? = 1 ]; then
    echo "source ~/Norm_by_jm/.normrc" >> ~/.zshrc
    fi
echo "Now you can remove this file/folder !";
echo "Don't forget to check for updates !";
