// Decimal to binary

#include <stdio.h>

int main()
{

    long long int n, x = 1, b = 0, y;

    scanf("%lld", &n);

    for (long long int i = 1;; i++)
    {
        y = n % 2;
        n /= 2;
        b = b + (y * x);
        x *= 10;

        if (n == 0)
        {
            break;
        }
    }

    printf("%lld", b);

    return 0;
}