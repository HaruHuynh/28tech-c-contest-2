// Cho số nguyên dương N, bạn hãy tính tổng : S(N) = 1/0! + 1/1! + 1/2! + 1/3! +... + 1/(N - 1)!. Trong đó ! là kí hiệu của giai thừa
#include <stdio.h>

int main () {
    int n; 
    scanf("%d", &n);
    double S = 0.0;
    double gt = 1.0;  // giai thừa

    for (int i = 0; i < n; i++) {
        if (i > 0) gt *= i;   // cập nhật giai thừa
        S += 1.0 / gt;        // cộng số hạng
    }
    printf("%.4lf\n", S);
    return 0;
}
