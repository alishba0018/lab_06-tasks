#include <stdio.h>

int main() {
    int n, i, f, a=0, b=1;

    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 2) 
    {
        printf("enter valid number.\n");
        return 0;
    }
    while(a<=n)
    {
      printf("the fibonacci series is: %d \n",a);
      f=a+b;
      a=b;
      b=f;
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