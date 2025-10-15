// Nhập vào n, tính tổng các chữ số của n, và in ra kết quả
#include <stdio.h>
int main() {
    long long n;
    scanf("%lld", &n);
    long long tong = 0;
    while(n != 0){
        tong += n%10;
        n /= 10;
    }
    printf("%lld", tong);
    return 0;
}