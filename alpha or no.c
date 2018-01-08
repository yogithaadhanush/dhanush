#include <stdio.h>

int main() 
{
	char k;
	scanf("%c",&k);
	if((k>='a'&&k<='z')||(k>='A'&&k<='Z'))
	{
		printf("it is an alphabet");
	}
	else
	{
		printf("not an alphabet");
	}
	
	return 0;
}
