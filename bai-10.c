// Nhập vào 1 dãy số có không quá 10000 số nguyên. Hãy xác định trong quá trình nhập có xuất hiện số 2022 hay không?

#include <stdio.h>

int main () {
    int n;
    scanf("%d\n", &n);
    int x; 
    int found = 0;
    for(int i = 1;i<=n;i++) {
        scanf("%d", &x);
        if(x == 2022){
            found = 1;
        }
    }
    if(found == 1){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}