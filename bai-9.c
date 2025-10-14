// Tính tích các ước của số tự nhiên N
#include <stdio.h>
#include <math.h>
int main() {
    long long n;
    scanf("%lld", &n);
    long long tich = 1;
    for(long long i=1;i<=sqrt(n);i++){
        if(n % i == 0){
           if (i == n/i) {
                tich *= i;// số chính phương, chỉ nhân 1 lần
            } else {
                tich *= i * n / i; // nhân cả cặp ước
            }
        }
    }
    printf("%lld", tich);
}