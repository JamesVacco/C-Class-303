#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	char ltr;

	FILE *read = fopen(argv[1], "r");
	FILE *write = fopen(argv[2], "w");


	while((ltr = fgetc(read)) != EOF)
	{
		ltr = tolower(ltr);
		switch(ltr)
		{
			case'a':
				ltr = 'z';
				break;
			case'e':
				ltr = 'q';
				break;
			case'i':
				ltr = 'v';
				break;
			case'o':
				ltr = 'y';
				break;
			case'u':
				ltr = 'x';
				break;
		}

		fputc(ltr, write);
	}
	fclose(read);
	fclose(write);
}
