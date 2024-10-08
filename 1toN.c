// Given an integer N. Print from 1 to N (https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/A)

#include <stdio.h>

int main()
{

    int N;

    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        printf("%d ", i);
    }

    return 0;
}