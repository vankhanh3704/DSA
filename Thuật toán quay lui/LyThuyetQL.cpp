#include <bits/stdc++.h>
using namespace std;


int X[100],n, cnt = 0;


// Lý thuyết
//int Try(i){
//    // Thử gán các giá trị có thể cho phần tử X[i]
//    for(j = <giá trị 1>.... <giá trị m>)
//        <Kiểm tra xem có gán được j cho X[i] hay không ?>
//        X[i] = j;
//        <kiểm tra xem i có phải là phần của cuối cùng của cấu hình hay không>
//    if(i == n){
//        <tìm được 1 cấu hình>
//    }
//    else{
//        <tiếp tục đi xây dựng phần tử thứ i + 1>
//        Try(i + 1)
//    }
//    <Back track>
//    <bỏ ghi nhận X[i] = j>
//}

void in(){
    for(int i = 1; i <= n; i++){
        cout << X[i];
    }
}

// Ví dụ sinh nhị phân
// vẽ cây quay lui
void Try(int i){
    // gán các giá trị có thể có cho bit thứ i
    ++cnt; // đếm xem có bao nhiêu lời gọi đệ quy
    for(int j = 0; j <= 1; j++){
        X[i] = j;
        if(i == n){
            in();
            cout << endl;
        }
        else Try(i + 1);
    }
    cout << cnt << endl;
}

int main(){
    cin >> n;
    Try(1);
}
