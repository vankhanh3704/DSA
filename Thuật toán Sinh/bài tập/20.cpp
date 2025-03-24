#include <bits/stdc++.h>
using namespace std;

#define ll long long

int n, a[1005];
bool ok = true;
void ktao(){
    for(int i = 1; i <= n; i++){
        a[i] = 0;
    }
}

void sinh(){
    int i = n;
    while(i >= 1&& a[i] == 1){
        a[i] = 0;
        --i;
    }
    if(i == 0) ok = false;
    else a[i] = 1;
}

bool check(){
    
    int l = 1 , r = n;
    while(l < r){
        if(a[l] != a[r]) return false;
        ++l;
        --r;
    }
    return true;
}

int main(){
//    int t; cin >> t;
    int t = 1;
    while(t--){
        cin >> n;
        int w[100];
        for(int i = 1; i <= n; i++){
            cin >> w[i];
        }
        ll ans = 1e18; // lưu kết quả
        
        ok = true;
        ktao();
        while(ok){
            ll sum1 = 0; // tính khối lượng các quả táo bit 0
            ll sum2 = 0; // bit 1
            for(int i = 1; i <= n; i++){
                if(a[i] == 1){
                    sum2 += w[i];
                }
                else sum1 += w[i];
            }
            ans = min(ans, abs(sum1 - sum2));
            sinh();
        }
        cout << ans << endl;
    }
}
