#include<stdio.h>
#include<conio.h>

void main()
{
	long int s = 0,d,n,t;
	clrscr();
	printf ("ENTER ANY NUMBER :");
	scanf ("%ld",&n);
	t = n;
	main (t)
	{
		d = t % 10;
		s = s + d*d*d;
		t /= 10;
	}
	if (s == n)
		printf ("%d IS ARMSTRONG NUMBER ",n);
	else
		printf ("%d IS NOT ARMSTRONG NUMBER ",n);
	else
		printf("%d CAN'T SAY",n);
    getch();
}
