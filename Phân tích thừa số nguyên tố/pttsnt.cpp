#include <bits/stdc++.h>
using namespace std;


const int maxn = 10000001;
bool nt[maxn];

void sangnt(){
    // duyệt các số từ 0 - n;
    // gán = true ~ là số nguyên tố
    for(int i = 0; i <= maxn; i++){
        nt[i] = true;
    }
    
    // 2 số 0 và 1 không phải là số nguyên tố
    nt[0] = nt[1] = false;
    // duyệt từ 2 -> căn bậc 2 của n như duyệt số nt bthg
    for(int i = 2; i <= sqrt(maxn); i++){
        // nếu số đang xét là số nguyên tố
        if(nt[i])
            // thì các bội của nó đều không phải là số nguyên tố
            // bước nhảy += i : bội
            // bắt đầu tại i * i: loại trường hợp bội đầu tiên của nó; do các phần tử nhỏ hơn nó trùng bội
            for(int j = i * i; j <= maxn; j+= i){
                nt[j] = false;
            }
    }
}

// phan tich thua so nguyen to
void pt(int n){
    for(int i = 2; i <= sqrt(n); i++){
        while(n % i == 0){
            cout << i << " ";
            n /= i;
        }
    }
    if(n > 1) cout << n << endl;
}


int main(){
    sangnt();
    int n;
    cin >> n;
    pt(n);
}
