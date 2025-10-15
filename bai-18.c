// Nhập vào n nguyên. Đếm số lượng chữ số của n là số nguyên tố.
#include <stdio.h>
int main () {
    long long n;
    scanf("%lld", &n);
    int dem = 0;
    while(n!=0){
        int digit = n % 10;
        if(digit == 2 || digit == 3 || digit == 5 || digit == 7) {
            dem++;
        }
        n/=10;
    }
    printf("%d", dem);
    return 0;
}