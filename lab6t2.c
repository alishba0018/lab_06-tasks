#include <stdio.h>
int main() {
    
    int a;
    int b;
  
    int n;
    int sum;
    printf("please enter a: ");
    scanf("%d",&a);
    printf("please enter b: ");
    scanf("%d",&b);
    n=a;
    do
    {
   
    n=n+2;
    sum=n+a;
    
    
    }
    while(n<=b);
    sum=sum+n;
    printf("%d \n",sum);
    

return 0;
}