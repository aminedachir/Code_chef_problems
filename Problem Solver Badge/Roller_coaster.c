#include <stdio.h>
int main(void)
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int X, H;
        scanf("%d %d", &X, &H);
        if ((X - H) >= 0)
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