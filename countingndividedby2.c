// Given a number N which is a power of two. Find how many times it can be divided by two untill it becomes 1.

#include <stdio.h>

int main()
{

    int N;
    int count = 0;

    scanf("%d", &N);

    for (int i = 1;; i++)
    {
        if (N % 2 == 0)
        {
            count++;
            N /= 2;
        }

        else if (N % 2 != 0)
        {
            break;
        }
    }

    printf("%d\n", count);

    return 0;
}