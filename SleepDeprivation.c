// https://www.codechef.com/problems/SLEEP
#include <stdio.h>

int main(void)
{
    int T, X;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &X);
        if (X < 7)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
