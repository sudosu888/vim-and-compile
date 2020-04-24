/* See LICENSE file for license and copyright details */
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc, char *argv[])
{
	/*
	 * Needed variables and integers
	 */
	int arg;
	char *file = argv[1];
	char edit[64];
	char gcc[64];
	char cc[64];

	/*
	 * System commands
	 */
	sprintf(edit, "vim %s", file);
	sprintf(gcc, "gcc %s", file);
	sprintf(cc, "cc %s", file);

	/*
	 * command line arguments
	 * -g compile with gcc (instead of cc)
	 * -m compile with make
	 * -i make install (obviously)
	 *  you can also use -mi to make and
	 *  install but you'll need root access.
	 *  default: Error out
	 */
	while((arg = getopt(argc, argv, "gmi")) != -1)
	{
		switch(arg)
		{
			case 'g' :
				system(edit);
				system(gcc);
				return 0;
			case 'm' :
				system(edit);
				system("make");
				return 0;
			case 'i' :
				system(edit);
				system("make install");
				return 0;
			default :
				printf("Invalid arguments\n");
				return 0;
		}
	}
	
	system(edit);
	system(cc);
	return 0;
}
