// bee1114

#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    for (int i = 0;; i++)
    {

        if (n == 2002)
        {
            printf("Acesso Permitido\n");
            break;
        }
        else
        {
            printf("Senha Invalida\n");
            scanf("%d", &n);
        }
    }

    return 0;
}