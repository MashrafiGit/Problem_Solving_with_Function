#include <stdio.h>

int sum(num)
{
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
    int num;
    scanf("%d", &num);
    int ans = sum(num);

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