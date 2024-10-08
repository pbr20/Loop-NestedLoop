// Given two integers M and N. Print all the integers between M and N

#include <stdio.h>

int main()
{

    int M, N;

    scanf("%d%d", &M, &N);

    for (int i = M; i <= N; i++)
    {
        printf("%d ", i);
    }

    return 0;
}