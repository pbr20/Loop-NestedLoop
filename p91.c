// Codeforce S1 pz-Three Numbers

#include <stdio.h>

int main()
{

    int k, s, z, count = 0;

    scanf("%d%d", &k, &s);

    for (int x = 0; x <= k; x++)
    {
        if (x <= s)
        {
            for (int y = 0; y <= k; y++)
            {
                z = s - (x + y);
                if (z >= 0 && z <= k)
                {
                    count++;
                }
            }
        }
    }

    printf("%d\n", count);

    return 0;
}
