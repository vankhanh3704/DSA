#include <bits/stdc++.h>
using namespace std;

// sinh hoán vị
// cho các số từ 1 tới n
// số lượng cấu hình là : n!
// 3
//123
//132
//213
//231
//312
//321

int n, k;
int a[100];
bool ok = true;

// cấu hình đầu : 1-> n
void ktao(){
    for(int i = 1 ; i <= n; i++){
        a[i] = i;
    }
}
// cấu hình cuối : n -> 1

void sinh(){
    // bắt đầu từ vị trí n - 1: k bắt đầu vị trí cuối
    // do phải so sánh ai với ai + 1
    // chừng nào a[i] > a[i + 1] thì dịch sang trái
    int i = n - 1;
    while(i >= 1 && a[i] > a[i + 1]){
        --i;
    }
    if(i == 0){
        ok = false;
    }
    // th : a[i] < a[i + 1]
    else{
        // đi tìm số đứng sau vị trí i mà > a[i] và nhỏ nhất có thể
        int j = n;// bắt đầu từ vị trí cuối cùng:
        // bỏ qua các vị trí mà a[j] < a[i] ~ dịch trái
        while (a[i] > a[j]) --j;
        // a[j] lúc này : > a[i] và nhỏ nhất
        // đổi chỗ a[i], a[j]
        swap(a[i], a[j]);
        // 2 cách : 1 reverse, 2 sort
        reverse(a + i + 1, a + n + 1);
    }
}

// hàm có sẵn
// next_permutation: sinh ra hoán vị kế tiếp
// prev_permutation: sinh ra hoán vị kế trước



int main(){
    int X[5] = {1, 2, 3, 4, 5};
    next_permutation(X, X + 5);
    for(int i = 0 ; i < 5; i++){
        cout << X[i] << " ";
    }
    cout << endl;
    cin >> n;
    ktao();
    while(ok){
        for(int i = 1; i <= n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
        sinh();
    }
}
