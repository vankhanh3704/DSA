#include <bits/stdc++.h>
using namespace std;


int X[100];
int n, k;
int daXet[100]; // true ! gía trị i đã được dùng false ngược lại
int cnt = 0;
void in(){
    for(int i = 1; i <= n; i++){
        cout << X[i];
    }
}

void Try(int i){
    ++cnt;
    for(int j = 1; j <= n; j++){
        // kiểm tra xem có thể gán gía trị j cho X[i] ko
        if(daXet[j] == 0){
            X[i] = j; daXet[j] = 1; // đánh dấu nó dùng
            if(i == n){
                in(); cout << endl;
            }
            else{
                Try(i + 1);
                
            }
            // bỏ ghi nhận đã dùng khi mà xog 1 lần đệ quy
            cout <<" Lần đầu tiên được bỏ ghi nhận: " << cnt << endl;
            daXet[j] = 0;
            
        }
        
    }
}



int main(){
    cin >> n;
    memset(daXet, 0 , sizeof(daXet)); // memset cho tất cả các giá trị = 0
    Try(1);
}
