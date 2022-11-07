#include<stdio.h>
int main(){
	int n,i,sumeven,sumodd,even,odd;
	printf("Enter number of elements:\n");
	scanf("%d",&n);
	printf("Even numbers is:\n");
	for(i=1;i<=n;i++){
		if(i%2==0){
			printf("%d\n",i);
			sumeven += i;
			
		}
	}
	printf("Odd numbers is:\n");
	for(i=1;i<=n;i++)
	{
			if(i%2==1){
			printf("%d\n",i);
			sumodd += i;
			}
			
			}
	printf("sum of even numbers is: %d\n",sumeven);
	printf("sum of even numbers is: %d\n",sumodd);
	return 0;
	
}
