#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 2) 
    {
        printf("enter valid number.\n");
        return 0;
    }
    for (i = 2; i < n; i++) 
    {
        if (n % i == 0) 
        {
            printf("not a prime number.\n");
            return 0;
        }
    }

    printf(" prime number.\n");
    return 0;
}
