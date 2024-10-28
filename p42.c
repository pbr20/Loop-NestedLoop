// bee1150

#include <stdio.h>

int main()
{

    int X, Z, sum = 0, count = 0;

    scanf("%d", &X);

    for (int i = 0;; i++)
    {

        scanf("%d", &Z);

        if (Z > X)
        {
            break;
        }
    }

    for (int i = X; sum < Z; i++)
    {
        sum += i;
        count++;
    }

    printf("%d\n", count);

    return 0;
}