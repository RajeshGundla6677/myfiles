#include<stdio.h>
#include<math.h>
int main(){
	double p,time,r,ci,notcy,A;
	printf("enter principal amount:\n");
	scanf("%lf",&p);
	printf("enter time:\n");
	scanf("%lf",&time);
	printf("enter rate of interest:\n");
	scanf("%lf",&r);
	printf("enter number of times comopounded in year:\n");
	scanf("%lf",&notcy);
	A = p*pow((1+r/notcy),notcy*time);
	ci = A-p;
	printf("total amount is:%lf",A);
	printf("total CI is:%lf",ci);
	return 0;
	
}
