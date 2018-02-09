#include<stdio.h>
int main()
{
	int n,a[5],i,j,temp,l,h;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
l=a[0];
h=a[n-1];
printf("%d",l);
printf("%d",h);
		return 0;
}
				
			
