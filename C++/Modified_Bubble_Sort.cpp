#include<stdio.h>
int main()
{
	int ar[20],i,j,k,n,temp,f=1;
	printf("Enter number of elements(<20) \n");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("Enter Element - %d\n",(i+1));
		scanf("%d", &ar[i]);
	}
	printf("\nTHE GIVEN ARRAY =>  ");
	for(i=0;i<n;i++)
		printf(" %d ",ar[i]);
	printf("\n\nSTEPS => ");
	for(i=0;i<n && f==1;i++)
	{
		f=0;
		for(j=0;j<(n-i-1);j++)
		{
			if(ar[j]>ar[j+1])
			{
				temp=ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=temp;
				f=1;
			}
		}
		printf("\nStep %d =>",(i+1));
		for(k=0;k<n;k++)
			printf(" %d ",ar[k]);
		
	}
	printf("\n\nTHE FINAL ARRAY =>  ");
	for(i=0;i<n;i++)
		printf(" %d ",ar[i]);
	return 0;
}
