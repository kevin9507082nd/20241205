#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int M;
        int print[256] = {0};
        scanf("%d", &M);

        for (int i = 0; i < M; i++)
        {
            int val;
            char ch;
            scanf(" %c %d", &ch, &val);
            print[(unsigned char)ch] = val;
        }

        int cent;
        scanf("%d", &cent);
        getchar();
        int count;
        scanf("%d", &count);
        getchar();
        char line[10001];
        long long sum = 0;
        for (int i = 0; i < count; i++)
        {
            fgets(line, sizeof(line), stdin);
            for (int j = 0; line[j]; j++)
            {
                sum += print[(unsigned char)line[j]];
            }
        }
        printf("%lld.%02lld$\n", sum / 100, sum % 100);
        if (sum >= cent)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
}
