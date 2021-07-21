#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20] = "vikky" ;
	char str2[20] = "vikky";
	int a ;
	a = strcmp(str1,str2);
	if(a==0)
	printf("BOTH ARE EQUAL.\n");
	else
	printf("NOT EQUAL.\n");
	return 0;
}