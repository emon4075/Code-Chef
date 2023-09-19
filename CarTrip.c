// https://www.codechef.com/problems/CARTRIP
#include <stdio.h>

int main(void)
{
    int T, X;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &X);
        if (X > 300)
        {
            printf("%d\n", (X * 10));
        }
        else
        {
            printf("%d\n", (300 * 10));
        }
    }

    return 0;
}
