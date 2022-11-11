#include "amgmhm.c"
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float sd(int *x,int n)
{
	float sum =0,xbar,am(int*,int);
	int i;
	xbar=am(x,n);
	for(i=0;i<n;i++)
		sum+=(x[i]-xbar)*(x[i]-xbar);
	
	return (sqrt(sum/n));
	

}

float md(int *x,int n)
{
	float sum =0,xbar,am(int*,int);
	int i;
	xbar=am(x,n);
	for(i=0;i<n;i++)
		sum += abs(x[i]-xbar);
	return (sum/n);
	
	
}
float vr(int *x,int n)
{	
	float result,sd(int *,int);
	result = sd(x,n);
	return (result*result);
	

}

int main()
{
	int *a,n;
	float ans,sd(int*,int),md(int*,int),vr(int*,int);
	a = get(&n);
	ans = sd(a,n);
	printf("Sd = %f\n",ans);
	printf("md = %f\n",md(a,n));
	printf("variance = %f\n",vr(a,n));
	free(a);
	return 0;
	
}
