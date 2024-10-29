// Given two integers A and B. Find pow(A, B) using loop

#include <stdio.h>

int main()
{

    int A, B, N;

    scanf("%d%d", &A, &B);

    N = A;

    for (int i = 1; i < B; i++)
    {
        A = N * A;
    }

    printf("%d\n", A);

    return 0;
}