#include <bits/stdc++.h>
using namespace std;

// sinh xâu nhị phân có độ dài N
// thực chất :số tập con của tập có n phần tử: 2^n
// 3
//000
//001
//010
//011
//100
//101
//110
//111



int n; // độ dài xâu
int X[100]; // lưu cấu hình của xâu
bool ok = true;
// cấu hình đầu tiên : n số 0
void ktao(){
    for(int i = 1; i <= n; i++){
        X[i] = 0;
    }
}
// cấu hình cuối cùng : n số 1

// hàm kiểm tra xem có phải cấu hình cuối cùng hay ko
bool kiemTra(){
    // kiểm tra xem nếu trong xâu vẫn còn bit 0
    // thì chưa phải xâu cuối cùng
    for(int i = 1; i <= n; i++){
        if(X[i] == 0) return false;
    }
    return true;
}

// đi tìm bit đầu tiên tính từ bên phải
void sinh(){
    
    int i = n; // duyệt từ cuối ( bên phải sang trái)
    while(i >= 1 && X[i] == 1){
        X[i] = 0; // gặp bit 1 chuyển sang bit 0
        --i; // dịch trái
    }
    
    // dấu hiệu biết cấu hình cuối cùng
    // khi i == 0 nghĩa là các bit thứ i > 0 : đều có gía trị là 1
    // ~ tương đương là cấu hình cuối cùng
    if(i == 0){
        ok = false;
    }
    else{
        // tìm được bit đầu tiên bằng 0, khi hàm while kết thúc
        X[i] = 1;
    }
    
}

// quy tắc cấu hình tiếp theo : 0 + 1 = 1 + 0 = 1, dư 0
// 1 + 1 = 0, dư 1



int main(){
    ktao(); // khởi tạo cấu hình đầu tiên
    cin >> n;
    // nếu chưa phải cấu hình cuối cùng thì vẫn cứ in ra
    while(ok){
        for(int i = 1; i <= n; i++){
            cout << X[i] <<" ";
        }
        cout << endl;
        // sau khi in ra 1 cấu hình thì mình sinh cấu hình tiếp theo
        sinh();
    }
    
}
