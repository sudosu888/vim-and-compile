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

-g will compile with gcc.

-m will compile with a makefile (must be in working directory)

-i will compile with make install (also must be in working directory)

you can use vc -mi 'filname' to make and make install. Always make
sure to have the command options first, then have the file. I wanna
fix this but I don't know how to yet, I'll update the code and fix
this issue when I learn more.

if no arguments are passed the program will default to cc.
