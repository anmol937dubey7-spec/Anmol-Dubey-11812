#include <stdio.h>
#include <string.h>

int main() {
    char password[] = "Abc@123";   // string password (characters + digits)
    char input[50];
    int attempts = 5;

    while (attempts > 0) {
        printf("Enter your password: ");
        scanf("%s", input);   // string input

        if (strcmp(input, password) == 0) {
            printf("Access Granted \n");
            break;
        } else {
            attempts--;
            printf("Wrong Password\n");

            if (attempts > 0) {
                printf("Re-enter your password, %d attempt(s) left\n\n", attempts);
            }
        }
    }

    if (attempts == 0) {
        printf("\nSystem Locked! Too many wrong attempts.\n");
    }

    return 0;
}
