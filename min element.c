#include<stdio.h>
int main()
{
	int a[50],n,i,l;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    s=a[0];
    for (i=1;i<n;i++)
    {
        if(s>a[i])
            s= a[i];
    }
    printf("\n%d",s);
    return 0;
}
