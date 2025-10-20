#include <stdio.h>
#include <math.h>

// SO FIBONACCI
//1. Cho 1 so, ktra xem so nay co phai la 1 so trong day Fibonacci hay khong?
int checkFibo (long long n){
    if(n == 0 || n == 1) return 1;
    long long fn1 = 1, fn2 = 0;
    for(int i = 2; i <= 92; i++){
        long long fn = fn1 + fn2;
        if(fn == n) return 1; //La so Fibo
        fn2 = fn1;
        fn1 = fn;
    }
    return 0;
}
//2. In ra n so Fibo dau tien: 0 -> n-1
void inFibo (int n){
    if(n == 1) printf("0");
    else if(n == 2) printf("0 1");
    else {
        printf("0 1 ");
        long long fn1 = 1, fn2 = 0;
        for(int i = 2; i < n; i++) {
            long long fn = fn1 + fn2;
            printf("%lld ", fn);
            fn2 = fn1;
            fn1 = fn;
        }
    }
}
//3. In ra so Fibo thu n
long long findFibo (int n) {
    if (n == 0 || n == 1) return n;
    long long fn1 = 1, fn2 = 0, fn;
        for(int i = 2; i <= n; i++) {
            fn = fn1 + fn2;
            fn2 = fn1;
            fn1 = fn;
        }
        return fn;
}

// LUY THUA NHI PHAN
// CACH 1 (CHUA TOI UU)
long long lt (int a, int b) {
    long long res = 1;
    for(int i = 1; i <= b; i++){
        res *= a;
    }
    return res;
}

// CACH 2 (TOI UU)
long long lt2 (int a, int b){
    long long res = 1;
    // Xet tung bit cua b
    while (b != 0) {
        if(b % 2 == 1){
    // b la so le: bit cuoi cung hien tai cua b la 1
            res *= a;
        }
        a *= a;
        b /= 2;
    }
}