#include<stdio.h>
void Push(int *,int *,int);      //INSERTS ELEMENT
void Pop(int *,int *);           //DELETES ELEMENT
void Display(int *,int *);       //DISPLAYS STACK
void Peek(int *,int *);          //DISPLAYS TOP ELEMENT
int main()
{
	int stk[50],top=-1,max,choice,j,ch;
	printf("\n*********\nS T A C K\n*********\n\n");
	printf("Enter Max Element(<50)\n");
	scanf("%d", &max);
	do
	{
		printf("\n\n-----M E N U-----\n 1 =>  PUSH\n 2 =>  POP\n 3 =>  DISPLAY\n 4 =>  PEEK\n\nEnter Choice=> \n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				Push(stk,&top,max);
				break;
			case 2:
				Pop(stk,&top);
				break;
			case 3:
				Display(stk,&top);
				break;
			case 4:
				Peek(stk,&top);
				break;
			default:
				printf("WRONG INPUT\n");
		}
		printf("CURRENT STACK => |");
		for(j=0;j<=top;j++)
			printf("%d|",stk[j]);
		printf("\n\n");
		printf("Enter '1' to continue, '0' to end\n");
		scanf("%d",&ch);
	}while(ch==1);
	return 0;
}

void Push(int *stk1,int *top1,int max1)
{
	int item1;
	if(*top1<(max1-1))
	{
		printf("Enter a number\n");
		scanf("%d", &item1);
		*top1+=1;
		stk1[*top1]=item1;
		printf("\n");
	}
	else
		printf("OVERFLOW\n\n");
}
void Pop(int *stk2,int *top2)
{
	int item2;
	if(*top2>=0)
	{
		item2=stk2[*top2];
		*top2-=1;
		printf("DELETED ELEMENT= %d\n\n",item2);
	}
	else
		printf("UNDERFLOW\n\n");
}
void Display(int *stk3,int *top3)
{
	int i;
	printf("STACK =>");
	for(i=0;i<=*top3;i++)
		printf(" %d ",stk3[i]);
	printf("\n\n");
}
void Peek(int *stk4,int *top4)
{
	printf("TOP ELEMENT= %d\n\n",stk4[*top4]);
}
