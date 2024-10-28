// bee1116

#include <stdio.h>

int main()
{

    int N;

    scanf("%d", &N);

    int X, Y;

    for (int i = 1; i <= N; i++)
    {
        scanf("%d%d", &X, &Y);

        if (Y == 0)
        {
            printf("divisao impossivel\n");
        }

        else
        {
            printf("%.1lf\n", ((double)X / Y));
        }
    }

    return 0;
}