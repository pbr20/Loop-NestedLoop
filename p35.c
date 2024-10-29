// bee1132

#include <stdio.h>

int main()
{

    int X, Y, sum = 0, T;

    scanf("%d%d", &X, &Y);

    if (X > Y)
    {
        T = X;
        X = Y;
        Y = T;
    }

    for (int i = X; i <= Y; i++)
    {
        if (i % 13 != 0)
        {
            sum = sum + i;
        }
    }

    printf("%d\n", sum);

    return 0;
}