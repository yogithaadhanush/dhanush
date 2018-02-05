#include<stdio.h>
int main()
{
    int i,c=0,n;
    char a[50]="yogi is always number 1";
    for(i=0;a[i]!=0;i++)
{
    if(a[i]>='0'&&a[i]<='9')
    {
        c++;
    }
}
printf("%d",c);
return 0;
}
