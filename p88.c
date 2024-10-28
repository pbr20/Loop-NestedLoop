// Codeforce S1 pm-Lucky Numbers

#include <stdio.h>

int main()
{

    int X, Y;
    int T, U, count = 0, count1 = 0;

    scanf("%d%d", &X, &Y);

    for (int i = X; i <= Y; i++)
    {
        T = i;
        for (int k = 1;; k++)
        {
            T /= 10;
            count1++;
            if (T == 0)
            {
                break;
            }
        }

        for (int j = 1; j <= count1; j++)
        {
            if (j == 1)
            {
                U = i;
            }
            T = U;
            T %= 10;
            U /= 10;
            if (T != 4 && T != 7)
            {
                break;
            }

            if (j == count1)
            {
                printf("%d ", i);
                count++;
            }
        }

        count1 = 0;
    }

    if (count == 0)
    {
        printf("-1\n");
    }

    return 0;
}