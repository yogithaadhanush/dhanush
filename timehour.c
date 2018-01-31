#include<stdio.h>
int main()
{
int t,m=0,h=0;
scanf("%d",&t);

m=t%60;
h=(t- m)/60; 

printf("%d hours and %d minutes\n",h,m);
return(0);
}
