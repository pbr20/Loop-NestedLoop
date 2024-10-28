// Given W and H (where H is odd integer). Printing all the digits from 0 to 9 with stars encompassing height of H and width of W.
// 0

#include <stdio.h>

int main()
{

    int H, W;

    scanf("%d%d", &W, &H);

    for (int i = 1; i <= H; i++)
    {

        if (i == 1 || i == H)
        {
            for (int j = 1; j <= W; j++)
            {
                printf("*");
            }
            printf("\n");
            continue;
        }

        printf("*");
        for (int k = 1; k <= (W - 2); k++)
        {
            printf(" ");
        }
        printf("*\n");
    }

    return 0;
}