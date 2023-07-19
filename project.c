#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int number,guess,nguess=1;
	srand(time(0));     //it will generate different number with each input
	number=rand()%100+1;
//	printf("The number is %d\n",number);
	do
	{
		printf("GUESS THE NUMBER BETWEEN 1 TO 100 :\n");
		scanf("%d",&guess);
		if(guess>number)
		{
			printf("CHOOSE A LOWER NUMBER :\n");
		}
		else if(guess<number)
		{
		printf("CHOOSE A BIGGER NUMBER :\n");	
		}
		else
		{
			printf("WOWOOOOO YOU GUESSED IT RIGHT IN %d GUESS :)\n",nguess);
		}
		nguess++;
	}while(guess!=number);
	return 0;
}