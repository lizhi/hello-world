/**
* main.c
* author: lizhi 
* create: 2012.4.12
* modify: 2012.4.12
* version: 1.0
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc < 3)
	{
		printf("at least 2 arguments.\n");
		return -1;
	}

	if (strcmp(argv[1], "-v"))
	{
		printf("hello world.\n");
	}

	if (strcmp(argv[2], "-h"))
	{
		printf("a.exe -v -h");
	}

	return 0;
}
