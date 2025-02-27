#include <stdio.h>
int main() {
    int num1, num2;
    char op;
    scanf("%d %d %c", &num1, &num2, &op);
    switch (op) {
        case '+': 
            printf("%d\n", num1 + num2);
            break;
        case '-': 
            printf("%d\n", num1 - num2);
            break;
        case '*': 
            printf("%d\n", num1 * num2);
            break;
        case '/': 
            if (num2 == 0) {
                printf("Error: Division by zero\n");
            } else {
                printf("%d\n", num1 / num2);
            }
            break;
        default:
            printf("Error");
    }

    return 0;
}
