#include <stdio.h>

int main(void)
{
    int X, Y;
    scanf("%d %d", &X, &Y);
    if (Y > X)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}