// Tính tổng S(n) = 1 + 2 + 3 + ... + n
// Gợi ý : Khai báo biến sum = 0, duyệt vòng lặp từ 1 tới n và cộng dồn i vào sum. Sau khi vòng lặp kết thúc thì in ra sum
// Chú ý phải lặp xong mới in sum, không in sum trong vòng for khi chưa tính xong tổng các số.
#include <stdio.h>
int main () {
    long long n;
    scanf("%lld", &n);
    long long sum = 0;
    for(long long i = 3; i <= n; i += 3) {
        sum += i;
    }
    printf("%lld", sum);
}
