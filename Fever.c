// https://www.codechef.com/problems/FEVER
#include <stdio.h>

int main(void)
{
    int T, X;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &X);
        if (X > 98)
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
