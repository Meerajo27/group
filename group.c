#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,rows;
	printf("enter the no. of rows :");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j%2==1)
			{
				printf("0");
			}
			else
			{
				printf("1");
			}
			}
			printf("\n");
		}
		getch();
		return 0;
		
	}

