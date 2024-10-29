// Given a sequence of N integers. Find whether this sequence is an increasing or a decresing one

#include <stdio.h>

int main()
{

    int n;
    int fn, ln;

    scanf("%d", &n);
    scanf("%d", &fn);

    for (int i = 1; i < n; i++)
    {
        scanf("%d", &ln);
    }

    if (ln / fn != 0)
    {
        printf("Increasing one\n");
    }

    else
    {
        printf("Decreasing one\n");
    }

    return 0;
}