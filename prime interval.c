#include <stdio.h>

int main()
{
	int a,b,i,s=0;
	scanf("%d%d",&a,&b);
	while(a<b)
	{
	for(i=2;i<a/2;i++)
	{
	if(a%2==0)
	{
		s++;
		break;
	}
	if(s==0)
{
	printf("%d",a);
	a++;
}
}
}
	return 0;
}
