// bee1133

#include <stdio.h>

int main()
{

    int X, Y, T;

    scanf("%d%d", &X, &Y);

    if (X > Y)
    {
        T = X;
        X = Y;
        Y = T;
    }

    for (int i = (X + 1); i < Y; i++)
    {
        if (i % 5 == 2 || i % 5 == 3)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}