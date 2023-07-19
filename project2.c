//snake water and gun
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int snakewatergun(char you,char comp)
{
	if(you==comp)
	{
		return 0;
	}
	if(you=='s' && comp=='w')
	{
		return 1;
	}
	else if(you=='w' && comp=='s')
	{
		return -1;
	}
	if(you=='w' && comp=='g')
	{
		return 1;
	}
	else if(you=='w' && comp=='s')
	{
		return -1;
	}
	if(you=='g' && comp=='w')
	{
		return 1;
	}
	else if(you=='g' && comp=='s')
	{
		return -1;
	}
}
int main()
{
	char you;
	char comp;
	srand(time(0));
	int number=rand()%100+1;
	if(number<33)
	{
		comp='s';
	}
	else if(number>33 && number<66)
	{
		comp='w';
	}
	else
	{
		comp='g';
	}
	printf("ENTER 's' FOR SNAKE 'g' FOR GUN AND 'w' FOR WATER :)\n");
	scanf("%c",&you);
	int result=snakewatergun(you,comp);
	printf("You choose %c and comp choose %c\n ",you,comp);
	if(result==0)
	{
		printf("GAME DRAW :|\n");
	}
	else if(result==1)
	{
		printf("YIPEEEE YOU WONNN :)\n");
	}
	else
	{
		printf("OHH NOOO YOU LOOOSSSEEEEEEE :(\n");
	}
	return 0;
	
}







