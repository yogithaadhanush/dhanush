#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,t=0;
    char a[100];
    printf("Enter the string:");
    scanf("%s",&a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if((a[i]=='0')||(a[i]=='1'))
        {
            t++;
        }
    }
    if(t==n)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
