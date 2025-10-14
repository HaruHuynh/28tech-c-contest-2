// Liệt kê các số chính phương dương và không vượt quá N
// Gợi ý : Số chính phương là số có dạng i^2 với i là số nguyên => i^2 <= N => Duyệt các số nguyên từ 1 tới căn N và in ra i^2 ta sẽ có các số chính phương không vượt quá N.

#include <stdio.h>
#include <math.h>

int main () {
    long long n;
    scanf("%lld", &n);
    for(long long i = 1;i*i<=n;i++) {
        printf("%lld ", i*i);
    }
    return 0;
}