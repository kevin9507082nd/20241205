#include <stdio.h>

int main() {
    long long n, rev, temp, count, t;
    scanf("%lld", &n);
    // 讀取用戶輸入的數字
    while(n--) {
        scanf("%lld", &t);

        // 初始化變數
        rev = 0;
        temp = t;

        // 反轉數字
        while (temp != 0) {
            rev = rev * 10 + temp % 10;
            temp /= 10;
        }

        // 計算數字的位數
        temp = t;
        
        count = 0;

        count++;
        t=t+rev;
        rev=0;
        temp = t;
        while (temp != 0) {
            rev = rev * 10 + temp % 10;
            temp /= 10;
        }
        while((t+rev)/2 !=t) {
            count++;
            t=t+rev;
            rev=0;
            temp = t;
            while (temp != 0) {
                rev = rev * 10 + temp % 10;
                temp /= 10;
            }
        }

        // 輸出結果
        printf("%lld %lld\n",count ,rev );
    }
    return 0;
}
