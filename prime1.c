//prime numbers upto numbers:
#include<stdio.h>
#include "prime.c"
int main() {
	int i,n,counter=0,prime(int);
	printf("Enter any number\n");
	scanf("%d",&n);
	printf("prime numbers are:\n");
	for (i=2;i<=n;i++)
	{
	if(prime(i))
		{
			printf("%d\n",i);
			counter ++;
		}
	}
	printf("Number of prime numbers is:%d\n",counter);
	return 0;
}











/* output is:
Enter any number
20
prime numbers are:
2
3
5
7
11
13
17
19
Number of prime numbers is:8
*/
