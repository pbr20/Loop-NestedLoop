// bee1154

#include <stdio.h>

int main()
{

    int i;
    int a = 0;
    double t;
    int n[10000];

    scanf("%d", &n[0]);

    for (i = 0;; i++)
    {

        if (n[i] > 0)
        {
            a = a + n[i];

            scanf("%d", &n[i + 1]);
        }

        else if (n[i] < 0)
        {
            break;
        }
    }
    t = (double)a / i;

    printf("%.2lf\n", t);

    return 0;
}