/**
* main.c
* author: lizhi 
* create: 2012.4.12
* modify: 2012.4.12
* version: 1.0
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	//printf("hello world.\n");
	if (argc < 2)
	{
		printf("at least 2 arguments.\n");
		return -1;
	}

	if (strcmp(argv[1], "-v"))
	{
		printf("hello world.\n");
	}

	return 0;
}
