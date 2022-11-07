//palindrome number or not?
#include<stdio.h>
#include<math.h>
int perfect(int n){
	int i,sum=0,a;
	a=n;
	for(i=1;i<=n/2;i++){
	if(n%i==0)
		sum = sum + i;
	}
	return (sum==n);
}
 
 
/* int main() {
	int n, perfect(int);
	printf("enter any number:\n");
	scanf("%d",&n);
	printf("Entered number is: %d\n",n);
	//printf("sum of the digits of a number is: %d\n",perfect(n));
	
	
	if(perfect(n))

		printf("perfect number.");
	else
		printf("Not a perfect number.");
		
	getchar();	
	
	
 }
*/



/*
Enter any number
1000
perfect numbers are:
6
28
496
Number of perfect numbers are:3
*/
