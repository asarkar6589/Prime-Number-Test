#include <stdio.h>

int main()
{
    int n, i, flag = 0;
    printf("Enter Your Integer: ");
    scanf("%d", &n);
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (n <= 1)
    {
        printf("Not a prime Number");
    }
    else
    {
        if (flag == 0)
        {
            printf("Prime Number");
        }
        else
        {
            printf("Not a Prime Number");
        }
    }
    return 0;
}