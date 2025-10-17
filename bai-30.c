// Bài này rất đơn giản, nhiệm vụ của bạn là kiểm tra số nhập vào là chẵn hay lẻ. Các bạn phải trả lời nhiều trường hợp. (Bài này có nhiệm vụ cho các bạn làm quen với các bài toán mà đề bài cho nhiều test case sau này)
#include <stdio.h>
int main () {
    long long  n;
    scanf("%lld", &n);
    int test;
    for(int i=1;i<=n;i++){
        scanf("%d", &test);
        if(test % 2 == 0){
            printf("EVEN\n");
        }else{
            printf("ODD\n");
        }
    }
    return 0;
}
