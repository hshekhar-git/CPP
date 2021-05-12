//Write a program to find whether a number is Gandhi number or not. If the sum of fourth power of individual digits of a number is equal to the number itself, then it is called Gandhi number.

#include <stdio.h>

int gandhiNumber(int n)
{
    if (n == 0)
        return 0;
    while (n != 1)
    {
        if (n % 4 != 0)
        {
            return 0;
        }
        n = n / 4;
    }
    return 1;
}

int main()
{
    int num;
    printf("Enter the number: \n");
    scanf("%d", &num);
    if (gandhiNumber(num))
        printf("%d is a gandhi number", num);
    else
        printf("%d is not a gandhi number", num);

    return 0;
}