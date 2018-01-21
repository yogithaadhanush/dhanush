#include <stdio.h>

int main()
{
int a,b,i,temp,num,rem;
scanf("%d%d",&a,&b);
for(i=a+1;i<b;i++)
{
	temp=i;
	num=0;
	while(temp!=0)
	{
		rem=temp%10;
		num=num+rem*rem*rem;
		temp=temp/10;
	}
	if(i==num)
	{
		printf("%d",i);
	}
}
	return 0;
}
