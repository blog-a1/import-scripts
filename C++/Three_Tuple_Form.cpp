#include<stdio.h>
int main()
{
	int arr[20][20],r,c,i,j,nze=0;
	printf("Enter number of Rows (<20)\n");
	scanf("%d", &r);
	printf("Enter number of Columns (<20)\n");
	scanf("%d", &c);
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			printf("Enter element for Row-%d  &  Column-%d \n",i+1,j+1);
			scanf("%d", & arr[i][j]);
		}
	}
	printf("\nTHE GIVEN MATRIX \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d \t",arr[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(arr[i][j]!=0)
				nze++;
		}
		
	}
	printf("\nNumber of Rows =  %d \n",r);
	printf("Number of Columns =  %d \n",c);
	printf("Number of Non-zero element =  %d \n",nze);
	printf("\nTHE THREE TUPLE FORM \n");
	printf("Rows \t Columns \t Non-zero element\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(arr[i][j]!=0)
				printf("%d \t %d \t\t %d \n",(i+1),(j+1),arr[i][j]);
		}
		
	}
	return 0;
}
