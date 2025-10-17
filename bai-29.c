// Cho N số nguyên, nhiệm vụ của bạn là tính tổng các số nguyên được nhập là số chẵn.
#include <stdio.h>
int main () {
    long long  n;
    scanf("%lld", &n);
    long long  tong = 0;
    for(int i=1;i<=n;i++){
        int num;
        scanf("%d", &num);
        if(num % 2 == 0){
            tong += num;
        }
    }
    printf("%lld", tong);
}