// Given W and H (where H is odd integer). Printing all the digits from 0 to 9 with stars encompassing height of H and width of W.
// 1

#include <stdio.h>

int main()
{

    int W, H;

    scanf("%d%d", &W, &H);

    for (int i = 1; i <= H; i++)
    {
        printf("*\n");
    }

    return 0;
}