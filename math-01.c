#include <stdio.h>
#include <math.h>

//1. Giai thua
long long gt (int n){
    long long res = 1;
    for (int i = 1; i <= n; i++){
        res *= i;
    }
    return res;
}

//2. So nguyen to
int nguyento(long long n){
    if(n < 2)
        return 0;
    for(long long i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
        return 0;
    }
    return 1;
}

//3. Tong uoc, dem uoc
int tong(int n){
    int sum = 0;
    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            sum += i;
            if(n / i != i)
                sum += n / i;
        }
    }
    return sum;
}

int dem(int n){
    int cnt = 0;
    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            ++cnt;
            if(n / i != i)
                ++cnt;
        }
    }
    return cnt;
}

//4. So chinh phuong
int cp(long long n){
    int can = sqrt(n);
    if(1ll * can * can == n)
        return 1;
    else   
        return 0;
}

//5. So hoan hao
int hh(int n){
    int sum = 1;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            sum += i;
            if(i != n / i)
                sum += n / i;
        }
    }
    if (sum == n)
        return 1;
    else 
        return 0;
}