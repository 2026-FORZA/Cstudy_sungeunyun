#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char ch[1000];

	scanf("%s", ch);
	for (int i = 0; ch[i] != '\0'; i++)
	{
		if (isupper(ch[i])) {
			ch[i] = tolower(ch[i]);
		}
		else if (islower(ch[i])) {
			ch[i] = toupper(ch[i]);
		}
	}

	printf("%s", ch);

	return 0;
}