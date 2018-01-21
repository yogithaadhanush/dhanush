#include <stdio.h>

int main()
{
	int a,i,s=0;
	scanf("%d",&a);
	for(i=2;i<a/2;i++)
	if(a%2==0)
	{
		s++;
		break;
	}
	if(s==0)
{
	printf("prime");
}
else
{
printf("nonprime");
}

	return 0;
}
