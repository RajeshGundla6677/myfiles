//mathtables upto n numbers:
#include<stdio.h>
#include "mathtable.c"
int main() {
	int i,n;
	void table(int);
	printf("Enter any number\n");
	scanf("%d",&n);
	printf("mathtables are:\n");
	for (i=1;i<=n;i++)
	{
	 table(i);
	 printf("wait for sometime\n");

	}
	return 0;
}





/*

Enter any number
3
mathtables are:
1*1 = 1
1*2 = 2
1*3 = 3
1*4 = 4
1*5 = 5
1*6 = 6
1*7 = 7
1*8 = 8
1*9 = 9
1*10 = 10
wait for sometime
2*1 = 2
2*2 = 4
2*3 = 6
2*4 = 8
2*5 = 10
2*6 = 12
2*7 = 14
2*8 = 16
2*9 = 18
2*10 = 20
wait for sometime
3*1 = 3
3*2 = 6
3*3 = 9
3*4 = 12
3*5 = 15
3*6 = 18
3*7 = 21
3*8 = 24
3*9 = 27
3*10 = 30
wait for sometime
*/
B

