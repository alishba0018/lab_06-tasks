#include <stdio.h>
int main() {
    
    int a;
    int i;
    //printf("please enter a (num you want to add): ");
    //scanf("%d",&a);
    do
    {
    printf("please enter a (num you want to add): ");
    scanf("%d",&a);    
    i=i+a;
    printf("%d \n",i);
    }
    while(a!=0);
    

return 0;
}