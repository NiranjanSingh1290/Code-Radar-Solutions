#include <stdio.h>
int main() {
    int n, i, j;
    char ch;
    scanf("%d", &n);
    for(i = n; i >= 1; i--) {
        ch = 'A'; // Start from 'A' for each row
        for(j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++; // Move to the next alphabet
        }
        printf("\n");
    }
    return 0;
}
