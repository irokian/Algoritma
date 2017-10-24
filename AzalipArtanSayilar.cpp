#include <stdio.h>
#include <conio.h>
main()
{
	int son=5;
	int bosluk=1;
	for(int a=0;a<5;a++)
	{
		for(int j=0;j<bosluk;j++)
			printf(" ");
		for(int i=1;i<=son;i++)
		    printf("%d",i);
	son--;
	bosluk++;
	printf("\n");
}
	int son1=5;
	int bosluk1=5;
	for(int b=0;b<5;b++)
	{
		for(int j=0;j<bosluk1;j++)
			printf(" ");
		for(int i=son1;i<=5;i++)
		    printf("%d",i);
	son1--;
	bosluk1--;
	printf("\n");
	}
getch();
}
