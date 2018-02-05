#include <stdio.h>
int main()
{
    int i,n,t1=0,t2=1,t;

    scanf("%d",&n);
  for(i=1;i<=n;i++)
    {
        printf("%d",t1); 
        t=t1+t2;
        t1=t2;
        t2=t;
}
    return 0;
}
