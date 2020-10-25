#include <stdio.h>
#include <conio.h>

void main()
{
	int i,n,fact =1;
	clrscr();
	printf ("ENTER THE NUMBER");
	scanf ("%d",&n);
	for (i=2;i<=n;i++)
		fact = fact *i;
	printf ("%d!=%d",n,fact);
	getch();
}
