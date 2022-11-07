#include<stdio.h>
#include<math.h>
int gcd(int m,int n) {
	while(m!=n){
	if(m>n)
		m = m-n;
	else 
		n = n-m;
	}
	return (m);
	
}
int lcm(int m , int n){
	int gcd(int,int);
	return(m*n/gcd(m,n));
}

int main(){
	int m,n,lcm(int,int),gcd(int,int);
	printf("Enter any two numbers:\n");
	scanf("%d%d",&m,&n);
	printf("LCM of the two numbers is:%d\n",lcm(m,n));
	printf("GCD of the two numbers is:%d\n",gcd(m,n));
	getchar();
}
