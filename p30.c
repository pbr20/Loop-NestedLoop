// Given a sequence of N integers. Find whether it's an Arithmetic sequence or not.

#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    int a, b, x, prev, y, count = 0;

    scanf("%d%d", &a, &b);

    x = a - b;
    prev = b;
    for (int i = 1; i < (n - 1); i++)
    {
        scanf("%d", &y);

        if ((prev - y) != x)
        {
            printf("Not Arithmetic Seqquence\n");
            break;
        }

        prev = y;
        count++;
    }

    if (count == (n - 2))
    {
        printf("Arithmetic Sequence\n");
    }

    return 0;
}