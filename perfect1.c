//perfect numbers upto n numbers:
#include<stdio.h>
#include "perfect.c"
int main() {
	int i,n,counter=0,perfect(int);
	printf("Enter any number\n");
	scanf("%d",&n);
	printf("perfect numbers are:\n");
	for (i=1;i<=n;i++)
	{
	if(perfect(i))
		{
			printf("%d\n",i);
			counter ++;
		}
	}
	printf("Number of perfect numbers are:%d\n",counter);
	return 0;
}

