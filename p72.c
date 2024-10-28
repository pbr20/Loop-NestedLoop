// Number 2 from pdf Given two integers N and M. Print an N x M square.

#include <stdio.h>

int main()
{

    int N, M;

    scanf("%d%d", &N, &M);

    for (int i = 1; i <= N; i++)
    {
        for (int i = 1; i <= M; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}