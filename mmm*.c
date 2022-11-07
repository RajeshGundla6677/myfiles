#include<stdio.h>
int main() {
	int a,b,c,max,min,mid;
	void mmm(int,int,int,int*,int*,int*);
	printf("Enter any three values a,b and c:\n");
	scanf("%d%d%d",&a,&b,&c);
	mmm(a,b,c,&max,&min,&mid);
	printf("max value is:%d\n",max);
	printf("min value is:%d\n",min);
	printf("mid value is:%d\n",mid);
	return 0;
}
void mmm(int x, int y,int z,int* largest,int* smallest,int* middle)
{
	*largest = x;
	if (y>*largest)
		*largest = y;
	
	if (z>*largest)
		*largest = z;
		
	*smallest = x;
	if (y<*smallest)
		*smallest = y;
	if (z<*smallest)
		*smallest = z;
	
	*middle = (x+y+z)-(*largest+*smallest);
		
}
