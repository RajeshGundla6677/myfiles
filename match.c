#include<stdio.h>
int main() {
	int n = 21,p,c;
	
	while(1){
		printf("number of match sticks left:%d\n",n); 
		printf("pick 1 or 2 or 3 or 4:\n");
		scanf("%d",&p);
		printf("user picked :%d\n",p);
		if(p>4 || p<1)
			continue;	
		n = n-p;
		printf("number of match stickes left:%d\n",n);
		c = 5-p;
		printf("computer picked up:%d\n",c);
		n = n-c;
		printf("number of match stickes left:%d\n",n);
		
		if(n==1)
		{
			printf("number of match stickes left:%d\n",n);
			printf("you lost the game try again you will never win against me!!!\n");
			break;
			
		}
			
		
		
	}
	return 0;
}
