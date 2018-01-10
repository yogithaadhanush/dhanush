#include <stdio.h>

int main()
{
   int n,k,sum=0,i;
   int s[100];
   scanf("%d",&n);
   scanf("%d",&k);
   for(i=1;i<=n;i++)
   {
scanf("%d",&s[i]);
}
for(i=1;i<=k;i++)
{
    sum=sum+s[i];
}
printf("%d",sum);
    return 0;
}
