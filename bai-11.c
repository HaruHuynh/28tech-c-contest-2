// Tính tổng : S(n) = -1 + 2 - 3 + 4 - 5 + ...... + (-1)^n*n
// Gợi ý : Duyệt i từ 1 tới n, nếu i chẵn thì cộng vào tổng, i lẻ thì trừ khỏi tổng

#include <stdio.h>

int main () {
    long long n;
    scanf("%lld", &n);
    long long tongchanle=0;

    for(int i=1;i<=n;i++){
        if(i % 2 != 0){
            tongchanle -= i;
        }else{
            tongchanle += i;
        }
    }
    printf("%lld", tongchanle);
    return 0;
}