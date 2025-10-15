// Nhập n không âm không quá 15, tính và in ra n! (n giai thừa)
// Tính tích các ước của số tự nhiên N
#include <stdio.h>
int main() {
    long long n;
    scanf("%lld", &n);
    long long giaithua = 1;
    for(long long i=1;i<=n;i++){
        giaithua *= i;
    }
    printf("%lld", giaithua);
    return 0;
}