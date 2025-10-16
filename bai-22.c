// Nhập N là một số nguyên không quá 100. In ra các hình tương ứng, mỗi hình cách nhau một dòng trống.
#include <stdio.h>

int main () {
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i; j++){
            printf(" ");
        }
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
printf("\n");   
    for(int i=1; i<=n; i++){
        for(int j=1; j<i; j++){
            printf(" ");
        }
        for(int j=1; j<=n-i+1; j++){
            printf("*");
        }
        printf("\n");
    }
printf("\n");    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if(i==1 || i==n || j==1 || j==i){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}