// Given an integer X. Print all of it's digits backwards

#include <stdio.h>

int main()
{

    int X, T;

    scanf("%d", &X);

    T = X;

    T%=10;

    printf("%d",T);

    for (int i = 1;; i++)
    {
        X /= 10;
        T = X;
        T %= 10;

        if (X != 0)
        {
            printf(", %d", T);
            
        }

        else
        {
            break;
        }
    }

    return 0;
}