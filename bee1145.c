// bee1145

#include <stdio.h>

int main()
{

    int X, Y;
    int t = 0, n=0;

    scanf("%d%d", &X, &Y);

    for (int i = 1; i <= Y; i++)
    {
        printf("%d ", i);

        n++;

    if(n<=(X-1)){
        printf(" ");
    }

    else{
        n=0;
    }

        t++;

        if (X == t)
        {
            printf("\n");
            t = 0;
        }
    }

    return 0;
}