//Given two integers A and B. Find their LCM.

#include <stdio.h>

int main()
{

    int n, m;

    scanf("%d%d", &n, &m);

    int lcm = n;
    if (m > n)
    {
        lcm = m;
    }

    for (lcm;; lcm++)
    {
        if (lcm % n == 0 && lcm % m == 0)
        {
            printf("%d\n", lcm);
            break;
        }
    }
    return 0;
}