#include <stdio.h>
#include <string.h>

int main()
{
	char s[100];
	scanf("%[^\n]", &s);
	int n= strlen(s);
	int i;
	for(i =n -1;i >= 0;i-- )
	{
		printf("%c", s[i]);
	}
}
