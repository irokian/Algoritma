#include <stdio.h>
#include <conio.h>
main()
{

int adet=9;
int bosluk=1;
for(int i=0; i<5; i++)
	{
		
		for(int t=0; t<bosluk;t++)
		printf(" ");
		for(int j=0; j<adet;j++)
		printf("*");
	
	adet-=2;
	bosluk+=1; //bosluk--;
	printf("\n");
	}
int adet1=1;
int bosluk1=5;
for(int f=0; f<5; f++)
	{
		
		for(int t=0; t<bosluk1;t++)
		printf(" ");
		for(int j=0; j<adet1;j++)
		printf("*");
	
	adet1+=2;
	bosluk1-=1; //bosluk--;
	printf("\n");
}
getch();
}
