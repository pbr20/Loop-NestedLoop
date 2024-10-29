// Given an integer N. Print all odd integers between 1 and N

#include <stdio.h>

int main()
{

    int N;

    scanf("%d", &N);

    for (int i = 1; i < N; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}