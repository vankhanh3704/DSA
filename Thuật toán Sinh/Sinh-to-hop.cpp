#include <bits/stdc++.h>
using namespace std;

// sinh tổ hợp chập K của n


int n, k;
int X[100];
bool ok = true;

// cấu hình đầu tiên
// các số từ 1 tới k: 1, 2, 3
void ktao(){
    for(int i = 1; i <= k; i++){
        X[i] = i;
    }
}
// cấu hình cuối cùng
// các số từ n - k + 1 -> n


// cấu hình tiếp theo: ở mỗi giá trị tại các vị trí từ 1 -> k: có giá trị lớn nhất
// mà 1 phần tử có thể nhận được : n - k + i
// vd: 123 : với i = 3, n =5, k = 3 : 5 - 3 + 3: cấu hình : 125 : là max
// với i = 2 : 5 - 3 + 2 : 4 -> 145

// bắt đầu từ bit thứ k : phần tử tại vị trí k xem max hay chưa : n-k+i
// nếu đạt : phải dịch sang trái
// chưa đạt thì tăng nó lên 1 đơn vị, và các phần tử đứng sau nó phải tăng lần lượt
// ví dụ : 124 -> 125 -> 134 -> 135
void sinh(){
    //bắt đầu từ bit thứ k
    int i = k;
    // kiểm tra phần tử X[k] đạt max hay chưa:
    // 2TH: X[i] == n - k + i : dich trai
    // X[i] != n -k + i : X[i]++, tất cả các phần tử từ vị trí i + 1 -> k sẽ tăng dần từ X[i] lên 1 đơn vị
    while(i >= 1 && X[i] == n - k + i){
        --i;
    }
    // TH 1 : i vẫn nằm trong [1, k]
    // TH 2 : i == 0: cấu hình cuối cùng
    if(i == 0){
        ok = false;
    }
    else{
        // X[i] != n -k + i : X[i]++, tất cả các phần tử từ vị trí i + 1 -> k sẽ tăng dần từ X[i] lên 1 đơn vị
        X[i]++;
        for(int j = i + 1; j <= k; j++){
            X[j] = X[j - 1] + 1;
        }
    }
}





int main(){
    cin >> n >> k;
    ktao();

    while (ok) {
        for(int i = 1; i <= k; i++){
            cout << X[i] << " ";
        }
        cout << endl;
        sinh();
    }
 
    
}
