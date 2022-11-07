#include<stdio.h>
#include<math.h>
long binary(long n){
	long sum =0,p=0,rem;
	while(n>0){
	rem = n%2;
	sum = sum+rem*pow(10,p);
	p++;
	n = n/2;
	
	
	
	}
	return (sum);

}
int main() {
	long n, binary(long);
	printf("enter any number\n");
	scanf("%ld",&n);
	printf("binary number of n is:%d\n", binary(n));
	return 0;
}
