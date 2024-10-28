// 3n + 1 [If the number is odd, replace with 3n+1. And if it is even, divide it by 2 until it becomes 1. Print the series]

#include <stdio.h>

int main()
{

    int n;

    scanf("%d", &n);
    printf("%d ", n);

    for (int i = 1;; i++)
    {
        if (n % 2 == 0)
        {
            n /= 2;
            printf("%d ", n);
        }

        if (n % 2 != 0 && n != 1)
        {
            n = (3 * n) + 1;
            printf("%d ", n);
        }

        if (n == 1)
        {

            break;
        }
    }

    return 0;
}