// Cho 3 số a, b, n. Nhiệm vụ của bạn là xác định xem phương trình ax + by = n có tồn tại cặp nghiệm (x, y) nguyên không âm hay không?
// Gợi ý : Duyệt x từ 0 tới n / a => Kiểm tra xem n - a * x có chia hết cho b hay không, nếu có là sẽ tồn tại cặp nghiệm nguyên x, y không âm.
#include <stdio.h>
int main () {
    int a,b,n;
    scanf("%d%d%d", &a,&b,&n);
    int found = 0;
    for(int i=0;i<=n/a;i++){
        if((n-a*i) % b == 0){
            found = 1;
        }
    }
    if(found){
        printf("YES");
    }else{
        printf("NO");
    }
}
