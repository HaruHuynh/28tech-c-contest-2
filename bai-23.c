// Nhập N là một số nguyên không quá 100. In ra các hình tương ứng, mỗi hình cách nhau một dòng trống.
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    // 1
    int count = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%d ", count++);
        }
        printf("\n");
    }
    printf("\n");
    // 2
    for(int i=1;i<=n;i++){
        int start = i;
        for(int j=0;j<n;j++){
            printf("%d ", start + j);
        }
        printf("\n");
    }
    printf("\n");
    // 3
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf("~");
        }
        for(int j=1;j<=i;j++){
            printf("%d", i);
        }
        printf("\n");  
    }
    printf("\n");
    //4
    for(int i=1;i<=n;i++){
        int ktao = i;
        int kc = n - 1;
        for(int j=1;j<=i;j++){
            printf("%d ",ktao);
            ktao += kc;
            kc--; 
        }
        printf("\n"); 
    }
}