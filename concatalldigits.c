//You will be given an integer N followed by N digits. Concat all the digits to form a single number X and then print the value of X^2.

#include <stdio.h>

int main()
{

    int n, x, m = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        m *= 10;
        scanf("%d", &x);
        m += x;
    }

    printf("%d\n", (m * m));

    return 0;
}