// Cho một số nguyên dương n, hãy biểu diễn n dưới dạng tổng của các số nguyên tố sao cho số lượng số hạng trong tổng là lớn nhất có thể.
// Gợi ý : N chẵn => biểu diễn dưới toàn số 2, N lẻ thì biểu diễn dưới các số 2 thêm vào 1 số 3 ở cuối. Vì 2 và 3 là 2 số nguyên tố nhỏ nhất
#include <stdio.h>
int main() {
    int n; 
    scanf("%d", &n);

    if(n<2){
        printf("-1");
        return 0;
    }

    int count;
    if (n % 2 == 0){
        count = n / 2;
    }else{
        count = (n - 3)/2+1;
    }
    printf("%d\n", count);
    
    if (n % 2 == 0) {
        while(n > 0){
            printf("2 ");
            n -= 2;
        }
    }else{
        int sole = (n - 3)/2;
        while(sole > 0){
            printf("2 ");
            sole--;
        }
        printf("3");
    }
}