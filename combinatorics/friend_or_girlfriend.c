#include <stdio.h>
int main(void)
{
    int T, N, m, p_1, p_2;
    char c;
    scanf("%d", &T);
    while (T--)
    {
        m = 0;
        scanf("%d", &N);
        char s[N + 2];
        scanf("%s", &s);
        for (int i = 0; i < N; i++)
        {
            if (s[i] == s[i + 1])
            {
                m += 1;
            }
            if (s[i] == " ")
            {
                c = s[i + 1];
            }
        }
        p_1 = 1;
        p_2 = 1;
        for (int i = 1; i <= N; i++)
        {
            p_1 = p_1 * i;
        }
        for (int i = 1; i <= m; i++)
        {
            p_2 = p_2 * i;
        }
        printf("%d\n", p_1 / p_2);
    }
    return 0;
}