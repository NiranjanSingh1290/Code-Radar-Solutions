#include <stdio.h>

int main() {
    char signal;
    scanf(" %c", &signal);  // Space before %c to handle any newline characters

    // Determining the action based on the traffic light signal
    switch (signal) {
        case 'R': 
            printf("Stop\n");
            break;
        case 'G': 
            printf("Go\n");
            break;
        case 'Y': 
            printf("Slow Down\n");
            break;
        default:
            printf("Invalid input\n");
    }

    return 0;
}
