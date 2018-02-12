#include<stdio.h>
#include<string.h>
int main()
{
  char s1[25],s2[25];
  int i=0,j=0;
  scanf("%s",&s1[i]);
  scanf("%s",&s2[i]);
  while(s1[i]!='\0')
  i++;
  while(s2[j]!='\0')
  {
    s1[i]=s2[j];
    j++;
    i++;
  }
  s1[i]='\0';
  printf("\nConcatenated String is %s",s1);
return 0;
}
