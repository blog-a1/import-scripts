#include<stdio.h>
void search(int *,int,int);
int main()
{
	int ar[20],ele,i,n;
	printf("Enter number of elements(<20) \n");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("Enter Element - %d\n",(i+1));
		scanf("%d", &ar[i]);
	}
	printf("Enter Search Element\n");
	scanf("%d", &ele);
	printf("\nTHE GIVEN ARRAY =>  ");
	for(i=0;i<n;i++)
		printf(" %d ",ar[i]);
	printf("\nTHE SEARCH ELEMENT =>  %d\n", ele);
	search(ar,n,ele);
	return 0;
}
void search(int *arr,int max_pos,int s_ele)
{
	int j,f=0;
	for(j=0;j<max_pos;j++)
	{
		if(s_ele==arr[j])
		{
			printf("FOUND AT POSITION =>  %d\n",(j+1));
			f=1;
		}
	}
	if(f==0)
		printf("ELEMENT NOT FOUND\n");
}
