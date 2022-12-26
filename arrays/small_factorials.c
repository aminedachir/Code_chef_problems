#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int N, P;
        P = 1;
        scanf("%d", &N);
        for (int i = 1; i <= N; i++)
        {
            P = P * i;
        }
        printf("%d\n", P);
    }
    return 0;
}
