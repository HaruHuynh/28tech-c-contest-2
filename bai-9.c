// Tính tích các ước của số tự nhiên N
#include <stdio.h>
#include <math.h>
int main() {
    long long n;
    scanf("%lld", &n);
    long long tich = 1;
    for(long long i=1;i<=sqrt(n);i++){
        if(n % i == 0){
            if(n % i == 0){
                tich *= i;
                if(i != n/i){
                tich *= n/i;
                }
            }
        }
    }
    printf("%lld", tich);
    return 0;
}