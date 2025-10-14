// Nhập vào n nguyên dương không qua 10^6, tính và in tổng sau ra màn hình. S = 1+3+5+7+.....+2*n-1
#include <stdio.h>
int main () {
    long long n;
    scanf("%lld", &n);
    long long tong = 0;
    for(int i=1;i<=n;i++){
        tong += i*2-1;
    }
    printf("%lld", tong);
}