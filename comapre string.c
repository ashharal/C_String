//1. WAP to compare two strings using strcmp ().
#include<stdio.h>
int main(){
	char s1[10], s2[10];
	int val;
	printf("enter string 1 and string 2");
	scanf("%s %s",s1, s2);
	
	printf("you have entered \n string 1:%s \nstring 2:%s",s1,s2);
	val=strcmp(s1, s2);
	if(val==0)
	printf("\nthe givan strings are equal");
	else
	printf("\nthe given strings are not equal");
	return 0;
}

