#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main (void)
{
	char ch[1000];

	scanf("%[^\n]", ch);
	int i = 0;

	i = strlen(ch);

	printf("%d", i);
	return 0;
}