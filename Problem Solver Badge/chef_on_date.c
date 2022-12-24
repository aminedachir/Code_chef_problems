#include <stdio.h>

int main(void)
{
    int T, X, Y;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d %d", &X, &Y);
        if (X >= Y)
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