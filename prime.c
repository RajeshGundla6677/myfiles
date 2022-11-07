//program on given number is prime number or not?

#include<stdio.h>
int prime(int n){
	int i;
	for (i=2;i<=n/2;i++)
	{
		if(n%i==0)
			return (0);	
	}
	return (1);

}
/*int main() {
	int n,prime(int);
	printf("Enter any number:\n");
	scanf("%d",&n);
	if(prime(n))
		printf("entered number is prime number\n");
	else
		printf("entered number is not a prime number\n");
		
	getchar();	
}*/
