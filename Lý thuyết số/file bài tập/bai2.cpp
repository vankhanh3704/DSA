#include <bits/stdc++.h>
using namespace std;

using ll = long long;

// sàng số nguyên tố trên đoạn
void sang(int l, int r){
    bool soNt[r - l + 1]; // 1 mảng lưu đoạn từ l -> r
    for(int i = 0; i <= r - l; i++){
        soNt[i] = true;
    }
    // ta phải dịch các số từ l -> r
    // thành mảng các số từ 0 -> r - l
    for(int i = 2; i <= sqrt(r); i++){
        for(int j = max(i * i, (l + i - 1)/i * i); j <= r; j += i){
            // đoạn này do dịch về nên phải trừ đi l
            soNt[j - l] = false;
        }
    }
    for(int i = max(2, l); i <= r; i++){
        if(soNt[i]){
            cout << i << " ";
        }
        
    }
}


int main(){
    int l, r;
    cin >> l >> r;
    sang(l , r);
}
