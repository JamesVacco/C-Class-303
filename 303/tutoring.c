#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;
	int brandoncharge;

	printf("How many hours of help do you need?\n");
	fscanf(stdin, "%d", &i);
	printf("Leah will charge $100");

	if(i<=20)
	{
		brandoncharge = i*25;
		printf("Brandon will charge %d", brandocharge);
	}
	else if(i>20)
	{
		int extrahours = i-20;
		double brandonextra = extrahours*2.50;
		brandonextra = 20*25+brandonextra;

		printf("Brandon will charge $%g", brandonextra);
	}
}
