#include <stdio.h>
#include <conio.h>
main()
{

int adet=1;
int bosluk=17;
int yildiz=1;
for(int i=0; i<5; i++)
	{
		for(int f=0; f<adet;f++)
		printf("*");
		for(int t=0; t<bosluk;t++)
		printf(" ");
		for(int j=0; j<yildiz;j++)  //for(int f=0; f<adet;f++)
		printf("*");                //printf("*");
		
	yildiz+=2;
	adet+=2;
	bosluk-=4; //bosluk--;
	printf("\n");
	}
getch();
}
