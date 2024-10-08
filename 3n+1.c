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