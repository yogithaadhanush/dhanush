#include<stdio.h>
#include<string.h>
int main()
{
	int i,k,n;
	char ch[100];
	scanf("%s",&ch);
	scanf("%d",&k);
	n=strlen(ch);
	for(i=0;i<k;i++)
	{
		printf("%c",ch[i]);
	}
return 0;
}
