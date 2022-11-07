//armstrong numbers upto n numbers:
#include<stdio.h>
#include "armstrong.c"
int main() {
	int i,n,counter=0,armstrong(int);
	printf("Enter any number\n");
	scanf("%d",&n);
	printf("Armstrong numbers are:\n");
	for (i=1;i<=n;i++)
	{
	if(armstrong(i))
		{
			printf("%d\n",i);
			counter ++;
		}
	}
	printf("Number of armstrong numbers are:%d\n",counter);
	return 0;
}





/*
output is:
Enter any number
1000
Armstrong numbers are:
1
153
370
371
407
Number of armstrong numbers are:5
*/
