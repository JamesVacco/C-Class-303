//by Jamie Vacco CSCI 303
#include <stdio.h>
#include <malloc.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int x;
	
	printf("Input: %s\n", argv[1]);
	char *cp;
	char na[45];
	cp = malloc(sizeof(char)*strlen(argv[1]));
	strcpy(na, argv[1]);
	cp=&na;
	printf("Address of String:%08x\n", cp);

	for(x=strlen(argv[1]);x>=0;x--)
	{
		printf("%c", *(cp+x));
	}
	printf("\n");

}
