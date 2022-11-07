//palindrome number or not?
#include<stdio.h>
#include<math.h>
long reverse(long n){
	long sum=0;
	int reminder;
	while (n>0){
	reminder = n %10;
	sum = sum*10 + reminder;
	n = n/10;
	
	}
	return (sum);
}
 long palindrome(long n){
	long reverse(long);
	return (n==reverse(n));//it returns 0 or 1 other than false and true.
 
 }
 
 int main() {
	long n, reverse(long),palindrome(long);
	printf("enter any numbers:\n");
	scanf("%d",&n);
	printf("Entered number is: %d\n",n);
	printf("reversed number is: %d\n",reverse(n));
	
	if(palindrome(n))
		printf("palindrome number.");
	else
		printf("Not a palindrome number.");
		
	getchar();	
	
	
 }

