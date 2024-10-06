#include <stdio.h>

int main() {
    int n, a, b, cube_of_digit, sum_of_cubes=0, original_num;
    printf("enter a number:");
    scanf("%d",&n);
    original_num=n;
    while(n>0)
    {
    a=n%10;
    b=n/10;
    n=b;
    printf("digit is: %d \n",a);
    cube_of_digit=a*a*a;
    printf("cube of digit is:%d \n",cube_of_digit);
    sum_of_cubes=cube_of_digit+sum_of_cubes;
    printf("sum of cube of digits is:%d \n",sum_of_cubes);
    }
    if(sum_of_cubes == original_num)
    {
      printf("n is an armstrong number.");
    }
    else
    {
      printf("n is not an armstrong number.");
    }
    return 0;
}