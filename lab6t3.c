#include <stdio.h>

int main() {
    int ATM_PIN;
    int i = 0;
    int correct_pin = 5678;

    while (i < 3) {
        printf("Enter 4-digit ATM PIN: ");
        scanf("%d", &ATM_PIN);
        
        if (ATM_PIN == correct_pin) {
            printf("Access granted!\n");
            return 0;
        } else {
            i=i+1;
            printf("Incorrect PIN.\n");
        }
    }
    printf("Your card is blocked.\n");
    return 0;
}