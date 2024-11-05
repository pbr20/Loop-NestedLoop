// Given a sequence of N integers. Find whether this sequence is an increasing or a decresing one

#include <stdio.h>

int main()
{

    int n;
    int fn, ln,f=0;

    scanf("%d", &n);
    scanf("%d", &fn);

    for (int i = 1; i < n; i++)
    {
        scanf("%d", &ln);

        if (ln / fn != 0)
    {
        fn = ln;
    }else{
        f=1;
        break;
    }
    }

    if(f==1){
        printf("Decreasing one\n");
    }

    else
    {
        printf("Increasing one\n");
    }

    return 0;
}
