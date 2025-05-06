#include <stdio.h>

int sum()
{
    int num;
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}

int main()
{
   sum();

    return 0;
}