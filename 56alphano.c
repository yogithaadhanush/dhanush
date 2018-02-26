#include<stdio.h>
int main()
{
	int i;
	char k[10];
	scanf("%s",&k);
	if((k[i]>='a'&&k[i]<='z')||(k[i]>='A'&&k[i]<='Z')||(k[i]>=0&&k[i]<=9))
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
