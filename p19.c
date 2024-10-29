// Given an integer X. Print the sum of it's digits

#include <stdio.h>

int main()
{

    int X, T;
    int sum = 0;

    scanf("%d", &X);

    T = X;
    for (int i = 1;; i++)
    {
        T %= 10;

        if (X != 0)
        {
            sum = sum + T;
            X /= 10;
            T = X;
        }

        else
        {
            break;
        }
    }

    printf("%d\n", sum);

    return 0;
}