#include <stdio.h>
#include <conio.h>
main()
{

int adet=1;
int bosluk=5;
for(int i=0; i<5; i++)
	{
		
		for(int t=0; t<bosluk;t++)
		printf(" ");
		for(int j=0; j<adet;j++)
		printf("*");
	
	adet+=2;
	bosluk-=1; //bosluk--;
	printf("\n");
	}
getch();
}
