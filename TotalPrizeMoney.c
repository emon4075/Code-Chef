// https://www.codechef.com/problems/PRIZEPOOL?tab=statement
#include <stdio.h>

int main(void)
{
    int T, X, Y;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d %d", &X, &Y);
        printf("%d\n", (X * 10) + (Y * 90));
    }

    return 0;
}
