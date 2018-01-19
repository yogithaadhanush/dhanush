#include <stdio.h>

int main() 
{
	int a,b,res=1;
	printf("enter the number");
	scanf("%d",&a);
	printf("enter the exponential");
	scanf("%d",&b);
	while(b!=0)
{
res=res*a;
b--;
}
printf("answer=%d",res);
	return 0;
}
