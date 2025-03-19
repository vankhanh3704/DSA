#include <bits/stdc++.h>
using namespace std;

using ll = long long;
// số fibonacci



ll f[100];
int cnt = 0;

void init(){
    f[0] = 0;
    f[1] = 1;
    for(int i = 2; i <= 92; i++){
        f[i] = f[i - 1] + f[i - 2];
    }
}

int main(){
    init();
    int n;
    cin >> n;

    

    // Kiểm tra số n có phải là số hoàn hảo không
    bool ok = false;
    for(int i = 0; i < cnt; i++){  // Sửa từ i <= cnt thành i < cnt
        if(n == f[i]){
            ok = true;
            break;
        }
    }

    // Kết quả
    if(ok) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}
