#include <stdio.h>
#include <math.h>

//1. Phân tích thừa số nguyên tố
void phantich(int n) {
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            //i là thừa số nguyên tố
            while(n % i == 0){
                printf("%d ", i);
                n /= i;
            }
        }
    }
    //Nếu chưa phân tích ra thừa số nguyên tố xong
    if(n != 1){
        printf("%d", n);
    }

    //Công thức thừa số nguyên tố
    // n = p1 ^ e1 x p2 ^ e2 x p3 ^ e3 ... pk ^ ek
    // => T(n) = (e1 + 1)(e2 + 1)(e3 + 1) ... (ek + 1)
}

//2. UCLN, BCNN 
int ucln(int a, int b) {
    while(b != 0){
        int r = a % b;
        a = b; 
        b = r;
    }
    return a;
}

int bcnn(int a, int b) {
    return a * b / ucln(a,b);
}

//3. Số thuận nghịch
int tn(int n) {
    int lat = 0, temp = n; // lưu lại giá trị ban đầu của n
    while(n != 0){
        lat = lat * 10 + n % 10;
        n / 10;
    }
    if(temp = lat) return 1;
    else return 0;
    // return temp = lat
}

//4. Tổ hợp chập k của n
// Cách 1
long long gt (int n) {
    long long res = 1; 
    for(int i = 1; i <= n; i++){
        res *= i;
    }
    return res;
}
long long tohop (int n, int k) {
    return gt(n) / (gt(k) * gt(n - k));
}

// Cách 2
long long tohop2 (int n, int k) {
    k = fmin(k, n - k);
    long long res = 1;
    for(int i = 1; i <= k; i++){
        res *= (n - i + 1);
        res /= i;
    }
    return res;
}
