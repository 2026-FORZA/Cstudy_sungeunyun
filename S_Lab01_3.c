#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int dash_counts[10] = { 6, 2, 5, 5, 4, 5, 6, 3, 7, 6 };

    char str[52];
    int total_dashes = 0;

    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        int num = str[i] - '0';

        total_dashes += dash_counts[num];
    }

    printf("%d\n", total_dashes);

    return 0;
}