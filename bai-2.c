// Tính tổng S(n) = 1^2 + 2^2 + 3^2 + 4^2 + ... + n^2

#include <stdio.h>
#include <math.h>
int main() {
    long long n;
    scanf("%lld", &n);
    long long tong = 0;
    for(long long i=0;i<=n;i++) {
        tong += pow(i,2);
    }
    printf("%lld", tong);
}