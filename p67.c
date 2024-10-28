// Codeforce S1 pn-Numbers Histogram

#include <stdio.h>

int main()
{

    char A;
    int n;
    int B[50];

    scanf("%c", &A);
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= B[i]; j++)
        {
            printf("%c", A);
        }
        printf("\n");
    }

    return 0;
}