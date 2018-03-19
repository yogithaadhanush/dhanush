#include<stdio.h>
#include<string.h>
int main()
{
	char s1[50],s2[50];
	scanf("%s",s1);
	strcpy(s2,s1);
	strrev(s2);
	if(strcmp(s1,s2)==0)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}
