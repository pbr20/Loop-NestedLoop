// Given an integer N. Find the summation of 1 to N.

#include <stdio.h>

int main()
{

    int N;
    int sum = 0;

    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        sum = sum + i;
    }

    printf("%d\n", sum);

    return 0;
}