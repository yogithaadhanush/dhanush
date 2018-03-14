#include<stdio.h>
#include<string.h>
int main()
{
char str[20];
int i,l;
scanf("%s",str);
l=strlen(str);
i=l/2;
if(l%2==0)
{
str[i]='*';
str[i-1]='*';
printf("%s",str);
}
else
{
str[i]='*';
printf("%s",str);
}
return 0;
}
