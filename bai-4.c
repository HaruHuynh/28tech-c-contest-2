// Tính tổng : S(n) =1+1/2+1/3+1/4+….+1/n
// Lưu ý : Lấy 1.0 / i khi tính toán thay vì 1 / i

#include <stdio.h>

int main() {
    long long  n;
    scanf("%lld", &n);
    double tong = 0;
    for(long long i=1;i<=n;i++) {
        tong += 1.0/i;
    }
    printf("%.3lf", tong);
}