// https://www.codechef.com/problems/CNTWRD?tab=statement
#include <stdio.h>

int main(void)
{
    int T, N, M;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d %d", &N, &M);
        printf("%d\n", N * M);
    }

    return 0;
}
