#include <stdio.h>
int main() {
    int n, i, j;
    char ch;
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        ch = 'A'; // Reset character for each row
        for(j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++; // Move to next alphabet
        }
        printf("\n");
    }
    return 0;
}
