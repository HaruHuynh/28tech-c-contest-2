// Nhập vào n, đếm số lượng chữ số của n và in ra kết quả.
#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);
    int dem = 0;
    
    if(n==0){
        dem = 1;
    }else{
        while(n) {
            dem++;
            n/=10;
        }
    }
    printf("%d", dem);
}