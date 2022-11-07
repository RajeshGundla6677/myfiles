#include<stdio.h>
int main() {
	int a,b,gcd,lcm;
	void gcd_lcm(int,int,int*,int*);
	printf("Enter any two values a and b:\n");
	scanf("%d%d",&a,&b);
	gcd_lcm(a,b,&gcd,&lcm);
	printf("gcd of the values is :%d\n",gcd);
	printf("lcm of the values is :%d\n",lcm);
	return 0;

}
void gcd_lcm(int m, int n, int* g,int* l) {
	int x,y;
	x = m;
	y = n;
	while(m!=n){
		if(m>n)
			m = m-n;
		else
			n = n-m;
	}
	*g = m;
	*l = x*y/(*g);
}
