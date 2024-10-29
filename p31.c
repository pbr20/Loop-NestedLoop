// bee1151

#include <stdio.h>

int main()
{

    int N;
    int a = 0;
    int b = 1;
    int x;

    scanf("%d", &N);

    printf("%d ", a);
    printf("%d ", b);

    for (int i = 0; i < (N - 2); i++)
    {

        x = a + b;

        if (i < (N - 3))
        {
            printf("%d ", x);
            a = b;
            b = x;
        }
        else
        {
            printf("%d\n", x);
            a = b;
            b = x;
        }
    }

    return 0;
}