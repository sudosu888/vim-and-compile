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

-m will compile with a makefile and install "make && make install" (be sure to run as root!)

# Known bugs
The program will not work if you add arguments after you specify the filename e.g
vc "filename" -m

You HAVE to make sure you type it like this: vc -m "filename"

I had to make it like this because originally it would skip the arguments as if
you didn't put any. I'm fairly new to C so I wasn't able to figure out why
