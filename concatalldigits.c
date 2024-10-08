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