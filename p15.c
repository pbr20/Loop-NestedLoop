// bee1070

#include <stdio.h>

int main()
{

    int X;
    

    scanf("%d", &X);

    for (int i = X; i < (X + 12); i++)
    {
        if (i % 2 != 0)
        {
            
            printf("%d\n", i);
           
        }
    }

    return 0;
}