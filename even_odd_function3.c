#include <stdio.h>

int sum(num)
{
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
    int num;
    scanf("%d", &num);
    int ans = sum(num);

    return 0;
}