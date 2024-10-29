// Given an integer N. Coun the number of integers that are divisible by 5 or 7 between 1 and N.

#include <stdio.h>

int main()
{

    int N;
    int count = 0;

    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        if (i % 5 == 0 || i % 7 == 0)
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}