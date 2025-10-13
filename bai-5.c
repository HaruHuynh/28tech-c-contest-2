// Tính tổng : S(n) = 1/2 + 1/4 + 1/6 + 1/8 +…….+ 1/(2n)
#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);
    double tong = 0;
    for(long long i=1;i<=n;i++) {
        tong += 1.0/(i*2);
    }
    printf("%.5lf", tong);
}