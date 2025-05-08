
#include <stdio.h>
#include <math.h>

int is_prime(int n) {
    if (n == 1) return 1;  // According to problem output sample, treat 1 as a "prime"
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n, c;
    while (scanf("%d %d", &n, &c) == 2) {
        int primes[1000];
        int count = 0;

        // Collect primes up to n
        for (int i = 1; i <= n; i++) {
            if (is_prime(i)) {
                primes[count++] = i;
            }
        }

        int start;
        int print_count;

        // Decide how many primes to print
        if (count <= c) {
            start = 0;
            print_count = count;
        } else {
            start = count - c;
            print_count = c;
        }

        // Output format
        printf("%d %d:", n, c);
        for (int i = start; i < count; i++) {
            printf(" %d", primes[i]);
        }
        printf("\n\n");
    }
    return 0;
}
