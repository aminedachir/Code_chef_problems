#include <stdio.h>
int main(void)
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int N;
        scanf("%d", &N);
        int s[N];
        for (int i = 0; i < N - 1; i++)
        {
            scanf("%d", &s[i]);
        }
        int dif;
        int min = 1000000000;
        for (int i = 0; i < N - 1; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                dif = abs(s[i] - s[j]);
                if (dif <= min)
                {
                    min = dif;
                }
            }
        }
        printf("%d", min);
    }
    return 0;
}