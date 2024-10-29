//bee1153

#include <stdio.h>

int main()
{

    int N;

    scanf("%d", &N);

    for (int i = N; i > 1; i--)
    {
        N = N * (i - 1);
    }
    printf("%d\n", N);

    return 0;
}