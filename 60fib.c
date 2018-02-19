#include <stdio.h>
int main()
{
    int i,a,t1=0,t2=1,t;

    scanf("%d",&a);
  for(i=1;i<=a;i++)
    {
        printf("%d",t1); 
        t=t1+t2;
        t1=t2;
        t2=t;
}
    return 0;
}
