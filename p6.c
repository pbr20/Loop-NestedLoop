// Given an integer N. Print the given series upto N.

#include <stdio.h>

int main()
{

    int N;
    scanf("%d", &N);
    for (int i = 3; i <= N; i += 4)
    {
        printf("%d ", i);
    }

    return 0;
}