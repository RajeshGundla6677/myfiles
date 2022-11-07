#include<stdio.h>
#include<stdlib.h>

int main(){
	int tax; 
	float ctax;
	long income;
	char pname[50];
	printf("Enter person's name:\n");
	fflush(stdin);
	scanf("%[^\n]s",pname);
	printf("%s\n",pname);
	printf("Enter person's income:\n");
	scanf("%Ld",&income);
	tax = income/10000;
	switch(tax){
		case 0:{
			ctax = 0;
			printf("calculated tax is = %f\n",ctax);
			break;
			}
		case 1:{
			ctax = (income-10000)*0.10;
			printf("calculated tax is = %f\n",ctax);
			break;
			}
			
			
		case 2:{
		case 3:
			ctax = (10000*0.10)+(income -20000)*0.15;
			printf("calculated tax is = %f\n",ctax);
			break;
			}
			
		case 4:{
		case 5:
		case 6:
		
			ctax = (10000*0.10)+(20000)*0.15+(income-40000)*0.20;
			printf("calculated tax is = %f\n",ctax);	
			break;
			}
			
		default:
			ctax = (10000)*0.10+(20000)*0.15+(30000)*0.20+(income-70000)*0.25;
			printf("calculated tax is = %f\n",ctax);
				
			
			
	}
	return 0;
}
