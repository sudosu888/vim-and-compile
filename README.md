# Vim and compile
This is a small C script I made, basically this will edit a C file
and will compile it shortly after.. Yes I can understand this is
pointless as you can do this purely with Vim after some configuration.
But I made this more just for the learning experience.

# Installation
Yep, no makefile just like my other programs. Just compile it
and pop it into your $PATH

if you're using cc or gcc you may wanna use -o and give the binary
a good name before putting it into your path directory. I use 'vc' because
its short sweet and simple.

# Useage
vc "file.c"

-e will edit, but won't compile
-g will compile with gcc

if no arguments are passed the program will default to cc
