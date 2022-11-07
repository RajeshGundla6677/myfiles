//palindrome number or not?
#include<stdio.h>
#include<math.h>
int armstrong(int n){
	int sum=0,a;
	int reminder;
	a=n;
	while (n>0){
	reminder = n %10;
	sum += reminder*reminder*reminder;
	n = n/10;
	
	}
	return (sum==a);
}
 
/* int main() {
	int n, armstrong(int);
	printf("enter any number:\n");
	scanf("%d",&n);
	printf("Entered number is: %d\n",n);
	printf("sum of digits of a number is: %d\n",armstrong(n));
	
	if(armstrong(n))
		printf("armstrong number.");
	else
		printf("Not an armstrong number.");
		
	getchar();	
	
	
 }
*/
