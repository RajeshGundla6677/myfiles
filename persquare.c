//palindrome number or not?
#include<stdio.h>
#include<math.h>
int ps(int n){
	int a;
	a = sqrt(n);
	return(a*a == n);
}
 
 int main() {
	int n, ps(int);
	printf("enter any number:\n");
	scanf("%d",&n);
	printf("Entered number is: %d\n",n);
	
	if(ps(n))
		printf("perfect square.");
	else
		printf("Not a perfect square number.");
		
	getchar();	
	
	
 }

