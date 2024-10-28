// bee1164

#include <stdio.h>

int main()
{

    int N, X;
    int a = 0;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &X);
        for (int i = 1; i < X; i++)
        {
            a = a + i;
            if (a == X)
            {
                printf("%d eh perfeito\n", X);
                break;
            }
        }
        if (a != X)
        {
            printf("%d nao eh perfeito\n", X);
        }
        a = 0;
    }

    return 0;
}