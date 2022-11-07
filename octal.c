#include<stdio.h>
#include<math.h>
long octal(long n){
	long sum =0,p=0,rem;
	while(n>0){
	rem = n%8;
	sum = sum+rem*pow(8,p);
	p++;
	n = n/8;
	
	
	
	}
	return (sum);

}
int main() {
	long n, octal(long);
	printf("enter any number\n");
	scanf("%ld",&n);
	printf("Octal number of n is:%o\n", octal(n));
	return 0;
}
