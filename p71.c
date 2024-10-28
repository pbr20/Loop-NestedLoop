// number 1 from pdf Given an integer N. Print the following pattern.

#include <stdio.h>

int main()
{

    int n;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int i = 1; i <= n; i++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}