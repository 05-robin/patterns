#include<stdio.h>
int main()
{
	printf("number of rows: ");
	int num,row,col;
	scanf("%d",&num);
	for(row=1;row<=num;row++,printf("\n"))
	{
		for(col=1;col<=row;col++)
		{
			printf("01");
		}
	}
	return 0;
}
