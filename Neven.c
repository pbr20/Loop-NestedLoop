// Given an integer N. Print N even integer.

#include <stdio.h>

int main()
{

    int N;

    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        printf("%d ", (i * 2));
    }

    return 0;
}