//factorials upto n numbers:
#include<stdio.h>
#include "fact.c"
long double fact(int);

long ncr(int n, int r) {

	return(fact(n)/fact(r)*fact(n-r));
}
long npr(int n, int r) {

	return(fact(n)/fact(n-r));
}
int main() {
	int n,r;
	long ncr(int,int),npr(int,int);
	printf("Enter values of n and r\n");
	scanf("%d%d",&n,&r);
	if(n>=r)
	{
	printf("ncr is %ld\n",ncr(n,r));
	printf("npr is %ld\n",npr(n,r));
	}
	else
		printf("n cannot be lesser than r");
	
	getchar();
}

