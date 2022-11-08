//each digit of a number in words
#include<stdio.h>
#include<stdlib.h>
void words(char*a)
{
	char *s[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
	int i;
	for(i=0;a[i]!='\0';i++)
		printf("%s\t",s[a[i]-'0']);
	printf("\n");	

}
void main(){
	char a[10];
	void words(char*);
	printf("Enter any string\n");
	fflush(stdin);
	scanf("%[^\n]s",a);
	words(a);
}
