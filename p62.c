// bee1158

#include <stdio.h>

int main()
{

    int n;
    int a = 0;

    scanf("%d", &n);

    int x;
    int y;

    for (int i = 0; i < n; i++)
    {
    }

    for (int i = 0; i < n; i++)
    {

        scanf("%d", &x);
        scanf("%d", &y);

        for (int i = x; i < (x + (y * 2)); i++)
        {

            if (i % 2 != 0)
            {
                a = a + i;
            }
        }
        printf("%d\n", a);
        a = 0;
    }
    return 0;
}