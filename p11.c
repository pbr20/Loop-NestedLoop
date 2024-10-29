//bee1075

#include <stdio.h>

int main()
{

    int N;
    int count = 0;

    scanf("%d", &N);

    for (int i = 0; i <= 10000; i++)
    {
        if (i % N == 0)
        {

            printf("%d\n", (i + 2));
        }
    }
    return 0;
}