#include <stdio.h>

int main()
{
    int a, num,n;
    int sum = 0;
    printf("\nEnter the five digit number");
    scanf("%d", &num);
    a = num % 10;
    n = n / 10;
    sum = sum + a;

    a = n % 10;
    n = n / 10;
    sum = sum + a;

    a = n % 10;
    n = n / 10;
    sum = sum + a;

    a = n % 10;
    n = n / 10;
    sum = sum + a;

    a = n % 10;
    sum = sum + a;
    printf("\n the sum of 5 digits of %d is %d", num, sum);
    return 0;
}