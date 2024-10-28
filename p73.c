// Number 6 from pdf 6. Given an integer N. Print the following pattern.

#include <stdio.h>

int main()
{

    int n;

    scanf("%d", &n);

    int C = n;

    for (int i = 1; i <= n; i++)
    {
        if (i > 1)
        {
            for (int j = 1; j <= (i - 1); j++)
            {
                printf(" ");
            }
        }

        for (int i = 1; i <= ((C * 2) - 1); i++)
        {
            printf("*");
        }

        C -= 1;

        printf("\n");
    }

    return 0;
}