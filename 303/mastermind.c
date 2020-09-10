//By Jamie Vacco
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{

	int	 cnum[3];	//Initializes computer numbers array
	int	 tcnum[3];	//Initializes temp computer array for later use
	int	 pnum[3];	//Initializes player numbers array

	int gamewin	 = 0;//Sets default game positions to false
	int gamelose	 = 0;

	int numrightp	=0;//The amount of numbers that are correct and are in the correct position
	int numrighti	=0;//The amount of numbers that are correct regardless of position

	int turncounter =0;//Counts the number of turns taken

	srand(time(NULL));
	for(int setvalue=0; setvalue<=3; setvalue++)
	{
		cnum[setvalue] = rand()%6+1;
	}

	while((gamewin != 1) && (gamelose != 1))
	{
		numrighti = 0;
		numrightp = 0;
		printf("Turn %d\n", turncounter+1);
		printf("-------\n");
		for(int i = 0;i <= 3;i++)//resets the temporary cnum incase any matched last loop
		{
			tcnum[i]=cnum[i];
		}

		printf("The computer's numbers are:");
		for(int i = 0;i<=3;i++)
		{
			printf(" %d", cnum[i]);
		}
		printf("\n");

		printf("Enter the numbers you wish to play between 1 and 6 inclusive (put a space between each number): \n");
		scanf("%d %d %d %d",&pnum[0],&pnum[1],&pnum[2],&pnum[3]);

		for(int x = 0; x<=3; x++)
		{
			if(pnum[x] == tcnum[x])
			{
				numrighti++;
			}
		}



		for(int a = 0; a<=3; a++)//goes down to see if the right numbers are anywhere
		{
			for(int b = 0; b<=3; b++)
			{
				if(pnum[a]==tcnum[b])
				{
					tcnum[b] = -1;
					numrightp++;
					break;
				}
			}
		}


		if(numrighti == 4)
		{
			gamewin = 1;
			printf("You win!\n");
		}
		else if(turncounter == 9)
		{
			gamelose = 1;
			printf("You Lose!\n");
		}
		else
		{
			turncounter++;
		}

		if(gamewin == 0)
		{
			printf("the number of correct numbers in the correct position is: %d\n", numrighti);
			printf("the number of correct numbers total is: %d\n\n",numrightp);
		}
	}

}
