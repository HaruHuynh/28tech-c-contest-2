// Nhập vào n nguyên dương không quá 10^6, tính và in tổng sau ra màn hình S =2+4+6+8+.....+2*n
#include <stdio.h>
int main () {
    long long n;
    scanf("%lld", &n);
    long long tong = 0;
    for(int i=1;i<=n;i++){
        tong += i*2;
    }
    printf("%lld", tong);
}