// Nhập vào n nguyên dương không quá 1000 và tính tổng sau, kết quả in ra màn hình. S =1^3+2^3+3^3+4^3+……+n^3.
#include <stdio.h>
#include <math.h>
int main () {
    long long n;
    scanf("%lld", &n);
    long long tong = 0;
    for(int i=1;i<=n;i++){
        tong += pow((double)i,(double)3);
    }
    printf("%lld", tong);
}