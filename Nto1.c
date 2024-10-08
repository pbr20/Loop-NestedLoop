// Given an integer N. Print from N to 1 (backwards)

#include <stdio.h>

int main()
{

    int N;

    scanf("%d", &N);

    for (int i = N; i >= 1; i--)
    {
        printf("%d ", i);
    }

    return 0;
}