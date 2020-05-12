/* See LICENSE file for license and copyright details */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

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
	 * -m compile with make & install
	 *  default: Error out
	 */
	while((arg = getopt(argc, argv, "gm")) != -1)
	{
		switch(arg)
		{
			case 'g' :
				system(edit);
				system(gcc);
				break;
			case 'm' :
				system(edit);
				printf("Make sure you're running as root!\n");
				system("make && make install");
				break;
			default :
				printf("Invalid arguments\n");
				break;
		}
		return 0;
	}
	
	/*
	 * Default behavior if
	 * no arguments are specified
	 */
	system(edit);
	system(cc);
	return 0;
}
