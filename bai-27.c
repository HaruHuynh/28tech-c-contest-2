// Cho số nguyên dương không âm N, ở mỗi thao tác bạn thực hiện tính tổng các chữ số của N sau đó gán lại cho N, thao tác này được thực hiện cho tới khi N chỉ còn 1 chữ số.
// Ví dụ N = 278 -> 17 -> 8, vậy ta có dạng rút gọn của 278 là 8. Nhiệm vụ của bạn là tìm dạn rút gọn của 1 số nguyên không âm N cho trước
#include <stdio.h>
int main () {
    long long n;
    scanf("%lld", &n);
    while (n >= 10){
        long long tong = 0;
        while (n > 0){
            tong += n % 10;
            n /= 10;
        }
        n = tong;
    }
    printf("%lld", n);
}
