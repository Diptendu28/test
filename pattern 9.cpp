/*  1
    10
    101
    1010
    10101  */
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter no of rows");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j%2==1)
				printf("1");
			else
				printf("0");
		}
		printf("\n");
	}
}