// https://www.codechef.com/problems/TOP10
#include <stdio.h>

int main(void)
{
    int T, X;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &X);
        if (X <= 10)
        {
            printf("YES\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
