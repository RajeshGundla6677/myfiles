//fibo series for the n number of terms
#include<stdio.h>
int main(){
	int a=0,b=1,c,i,n;
	printf("Enter n number of Elements:\n");
	
	scanf("%d",&n);
	printf("%d\n",a);
	printf("%d\n",b);
	
	for(i=1;i<=n-2;i++)
	{
			c = a+b;
			printf("%d\n",c);
			a = b;
			b = c;
	}
	return 0;
}
