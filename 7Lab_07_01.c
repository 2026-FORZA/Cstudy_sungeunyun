#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char* str = (char*)malloc(sizeof(char) * 100);
    int a, b;

    scanf("%s", str);

    scanf("%d %d", &a, &b);

    for (int i = a - 1; i <= b - 1; i++)
    {
        printf("%c", *(str + i));
    }
    printf("\n");

    free(str);





	return 0;
}