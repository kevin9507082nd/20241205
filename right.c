#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int m;
        scanf("%d", &m);
        int a, b;
        int count[1000] = {0};
        int num[100]={0};
        long long res=0;
        int s=0;
        int r=1;
        for (int i = 0; i < m; i++)
        {
            scanf("%d %d", &a, &b);
            int key = a < b ? a * 10 + b : b * 10 + a;

            res += count[key];
            count[key]++;
        }
        printf("%lld\n", res);
        for(int i=0;i<=100;i++){
            if(count[i]>1){
                s++;
            }
        }
        printf("%d\n",s);
        int n=0;
        for(int j=0;j<=100;j++){
            if(count[j]>1){
                printf("%d %d %d\n",j/10,j%10,count[j]);
            }
        }
    }
}
