// Tính tổng ước của số nguyên dương N. Độ phức tạp mong đợi O(sqrt(N))

#include <stdio.h>
#include <math.h>
int main() {
    long long n;
    scanf("%lld", &n);
    long long tong = 0;
    for(int i=1;i<=sqrt(n);i++){
        if(n % i == 0){
            tong += i;
        if(i != n/i){
            tong += n/i;
        }
        //    if (i == n/i) {
        //         tong += i;// số chính phương, chỉ cộng 1 lần
        //     } else {
        //         tong += i + n / i; // cộng cả cặp ước
        //     }
        }
    }
    printf("%lld", tong);
}