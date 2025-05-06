#include <stdio.h>

int sum()
{
    int num;
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int ans = sum();

    if (ans == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }

    return 0;
}