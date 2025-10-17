// Tính tổng S(n) = 1 + 1.2 + 1.2.3 + 1.2.3.4 + ... + 1.2.3....n
#include <stdio.h>
int main () {
    long long n;
    scanf("%lld", &n);
    long long tong = 0;
    int giaithua = 1;
    for(int i=1;i<=n;i++){
        giaithua *= i;
        tong += giaithua;
    }
    printf("%lld", tong);
}