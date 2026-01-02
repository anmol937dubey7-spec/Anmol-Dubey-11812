#include <stdio.h>

int main() {
    int password = 1234;
    int input;
    int attempts = 5;

    while (attempts > 0) {
        printf("Enter your 4 digit password: ");
        scanf("%d", &input);

        if (input == password) {
            printf("Access Granted\n");
            break;
        } else {
            attempts--;
            printf("Wrong Password\n");

            if (attempts > 0) {
                printf("Re-enter your password, %d attempt left\n\n", attempts);
            }
        }
    }

    if (attempts == 0) {
        printf("\nSystem Locked! Too many wrong attempts.\n");
    }

    return 0;
}

