// bee1159

#include <stdio.h>

int main()
{

    int n;
    int a = 0;

    scanf("%d", &n);

    for (int i = 0;; i++)
    {
        for (int i = n; i < (n + 10); i++)
        {
            if (i % 2 == 0)
            {
                a = a + i;
            }
        }
        printf("%d\n", a);
        a = 0;
        scanf("%d", &n);

        if (n == 0)
        {
            break;
        }
    }

    return 0;
}