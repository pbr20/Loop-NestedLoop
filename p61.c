// bee1146

#include <stdio.h>

int main()
{

    int x;

    scanf("%d", &x);

    for (int i = 1;; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            if (j != x)
            {
                printf("%d ", j);
            }
            else if (j == x)
            {
                printf("%d", j);
            }
        }
        printf("\n");

        scanf("%d", &x);
        if (x == 0)
        {

            break;
        }
    }

    return 0;
}