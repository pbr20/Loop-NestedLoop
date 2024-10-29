// bee1080

#include <stdio.h>

int main()
{

    int n[100];

    for (int i = 0; i < 100; i++)
    {
        scanf("%d", &n[i]);
    }

    int a = n[0];
    int b;

    for (int i = 0; i < 100; i++)
    {

        if (n[i] > a)
        {
            a = n[i];
            b = (i + 1);
        }
    }

    printf("%d\n", a);
    printf("%d\n", b);

    return 0;
}