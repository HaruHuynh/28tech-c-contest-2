// Cho 2 số a và b. Nhiệm vụ của bạn là tính ước chung lớn nhất của a giai thừa và b giai thừa  
// Gợi ý : Bài này không thể tính a! và b! vì long long chỉ lưu được cỡ 20!. Bạn thử nghĩ xem UCLN của 10! và 5! là bao nhiêu ?
#include <stdio.h>

int main () {
    long long a,b; 
    scanf("%lld%lld", &a,&b);

    long long nho = (a < b) ? a : b;

    long long res = 1;
    for (int i = 1; i <= nho; i++) {
        res *= i;
    }
    printf("%lld\n", res);
    return 0;
}