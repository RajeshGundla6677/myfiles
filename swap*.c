#include<stdio.h>
void swap(int *p1,int *p2)
{
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
int main() {
	int a,b;
	void swap(int*,int*);
	printf("enter any two values a&b\n");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("after swapping the values:\n");
	printf("a value is = %d\n",a);
	printf("b value is = %d\n",b);
	return 0;
	
	
}
