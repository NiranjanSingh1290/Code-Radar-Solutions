#include <stdio.h>
int main() {
    int n, i, j, start;
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        if(i % 2 == 1) { 
            start = 1;
        } else { 
            start = 0;
        }
        for(j = 1; j <= i; j++) {
            printf("%d ", start);
            start = 1 - start; 
        }
        printf("\n");
    }
    return 0;
}