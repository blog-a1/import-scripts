#include<stdio.h>
int main()
{
	int ar[20],i,j,n,min,pos_min,temp,k;
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
	for(i=0;i<(n-1);i++)
	{
		min=ar[i];
		pos_min=i;
		for(j=i+1;j<n;j++)
		{
			if(ar[j]<min)
			{
				min=ar[j];
				pos_min=j;
			}
		}
		if(pos_min!=i)
		{
			temp=ar[pos_min];
			ar[pos_min]=ar[i];
			ar[i]=temp;
		}
		
	}
	printf("\nTHE FINAL ARRAY =>  ");
	for(i=0;i<n;i++)
		printf(" %d ",ar[i]);
	return 0;
}
