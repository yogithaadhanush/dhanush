#include<stdio.h>
int main()
{
	int i,count=0;
	char ch[50];
	scanf("%s",&ch);
	for(i=0;ch[i]!='\0';i++)
	{
	if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U')
	{
		count++;
	}
	}
	if(count>0)
	{
		printf("vowel is present");
	}
	else
	{
		printf("vowel is not present");
	}

	return 0;
}
