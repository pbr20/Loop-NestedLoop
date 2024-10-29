// bee1113

#include <stdio.h>

int main()
{

    int x[4], y[4];

    for (int i = 0;; i++)
    {
        scanf("%d%d", &x[i], &y[i]);

        if (x[i] > y[i])
        {
            printf("Decrescente\n");
        }
        else if (y[i] > x[i])
        {
            printf("Crescente\n");
        }
        else if (x[i] == y[i])
        {
            printf("\n");
            break;
        }
    }

    return 0;
}