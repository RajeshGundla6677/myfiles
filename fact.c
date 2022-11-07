//factorial of a number :
#include<stdio.h>
long double fact(int n){
	int i;
	long double factorial=1;
	for(i=1;i<=n;i++){
		factorial *= i;
		
	}
	return(factorial);
	
}
/*int main() {
	int n;
	long double fact(int);
	printf("Enter any number:\n");
	scanf("%d",&n);
	printf("factorial of a given number is:%Lf\n",fact(n));
	return 0;
	
}
*/
