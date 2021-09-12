//5. Demonstrate all string function using library function
#include<stdio.h>
int main()
{
 char s1[10]="HELLO", s2[10]=" WORLD", s3[15];
 int val;
 
 //1.strcmp
 val=strcmp(s1,s2);
 if(val==0)
 printf("strings are equal");
 else
 printf("strings are not equal");
 
 //2.strlen;
 printf("\nlength of string 1=%d \n string2=%d",strlen(s1),strlen(s2));
 
 //3.strcat
 printf("\n concatinating string :%s",strcat(s1,s2));
 
 //4.strcpy
 printf("\n copied string :%s",strcpy(s3,s1));
 
 
 //6lower case
 printf("\n lowercase string :%s",strlwr(s1));
 
 //uppercase
 printf("\n string in uppercase :%s",strupr(s1));
 //5.reverse string
 printf("\n reverse string :%s",strrev(s1));
 
	return 0;
}
