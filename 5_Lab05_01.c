#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n;
void f()
{
	if (n % 2 == 0)
		printf("%s", "even");
	else
		printf("%s", "odd");
}

int main()
{
	scanf("%d", &n);
	f(n);
	return 0;
}