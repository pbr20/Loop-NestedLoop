// Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999 ...] [First N terms]

#include <stdio.h>

int main()
{

    int n;

    scanf("%d", &n);

    int sum = 0;

    if(n>0){
        printf("9");
    }

    for (int i = 1; i < n; i++)
    {
        sum = 9 + (sum * 10);
        printf(" + %d", sum);
    }

    return 0;
}