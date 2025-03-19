#include <bits/stdc++.h>
using namespace std;

using ll = long long;
// Số hoàn hảo


// Hàm kiểm tra số nguyên tố
bool sont(ll n){
    if (n <= 1) return false;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

ll hh[100];
int cnt = 0;

void init(){
    // Duyệt từ 2 đến 32
    for(int p = 2; p <= 33; p++){
        if(sont(p)){
            ll tmp = pow(2, p) - 1;
            if(sont(tmp)){
                hh[cnt] = 1ll * tmp * pow(2, p - 1);
                ++cnt;
            }
        }
    }
}

int main(){
    init();
    int n;
    cin >> n;

    // In danh sách số hoàn hảo
    for(int i = 0; i < cnt; i++){
        cout << hh[i] << endl;
    }

    // Kiểm tra số n có phải là số hoàn hảo không
    bool ok = false;
    for(int i = 0; i < cnt; i++){  // Sửa từ i <= cnt thành i < cnt
        if(n == hh[i]){
            ok = true;
            break;
        }
    }

    // Kết quả
    if(ok) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}
