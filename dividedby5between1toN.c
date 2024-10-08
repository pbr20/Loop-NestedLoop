// Given an integer N. Print all integers that are divided by 5 between 1 and N.

#include <stdio.h>

int main()
{

    int N;

    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        if (i % 5 == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}