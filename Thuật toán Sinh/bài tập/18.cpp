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
    
    // kí tự bắt đầu A hoặc kết thúc H
    if(a[1] == 0 || a[n] == 1) return false;
    for(int i = 1; i < n; i++){
        // 2 kí tự canh nhau là H
        if(a[i] && a[i + 1] == 1){
            return false;
        }
    }
    return true;
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        ok = true;
        ktao();
        while(ok){
            if(check()){
                for(int i = 1; i <= n; i++){
                    if(a[i] == 0) cout << "A";
                    else cout << "H";
                }
                cout << endl;
            }
            sinh();
        }
    }
}
