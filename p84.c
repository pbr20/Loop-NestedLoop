// Given W and H (where H is odd integer). Printing all the digits from 0 to 9 with stars encompassing height of H and width of W.
// 6

#include <stdio.h>

int main()
{

    int W, H;

    scanf("%d%d", &W, &H);

    for (int i = 1; i <= H; i++)
    {
        if (i == 1 || i == ((H / 2) + 1) || i == H)
        {
            for (int j = 1; j <= W; j++)
            {
                printf("*");
            }
            printf("\n");
        }

        else if (i < ((H / 2) + 1))
        {
            printf("*");
            for (int k = 1; k <= (W - 1); k++)
            {
                printf(" ");
            }
            printf("\n");
        }
        else if (i > ((H / 2) + 1))
        {
            printf("*");
            for (int L = 1; L <= (W - 2); L++)
            {
                printf(" ");
            }
            printf("*\n");
        }
    }

    return 0;
}