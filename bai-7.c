// Đếm số lượng ước và liệt kê các ước theo thứ tự tăng dần của số nguyên dương N
// Gợi ý : Duyệt vòng lặp từ 1 tới N lượt thứ nhất để đếm ước, lượt thứ 2 để liệt kê ước
#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);
    int dem = 0;
    for(long long i=1;i<=n;i++){
        if(n % i == 0){
            dem++;
        }
    }
    printf("%d\n", dem);
    
    for(long long i=1;i<=n;i++){
        if(n % i == 0){
            printf("%lld ", i);
        }
    }
}