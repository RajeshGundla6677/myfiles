#include<stdio.h>
#include<math.h>
long hexa(long n){
	long sum =0,p=0,rem;
	while(n>0){
	rem = n%16;
	sum = sum+rem*pow(16,p);
	p++;
	n = n/16;
	
	
	
	}
	return (sum);

}
int main() {
	long n, hexa(long);
	printf("enter any number\n");
	scanf("%ld",&n);
	printf("hexa number of n is:%x\n", hexa(n));
	return 0;
}
