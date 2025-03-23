#include <bits/stdc++.h>
using namespace std;

// xâu nhị phân có k bit 1
int n, k;
int a[101];
bool ok;
void ktao(){
    for(int i = 1; i <= n; i++){
        a[i] = 0;
    }
}
void sinh(){
    int i = n;
    while(i >= 1 && a[i] == 1){
        a[i] = 0;
        --i;
    }
    if(i == 0) ok = false;
    else a[i] = 1;
}

bool check(){
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        cnt += a[i]; // cộng các bit 1
    }
    return cnt == k;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        ktao();
        ok = true;
        while(ok){
            if(check()){
                for(int i = 1; i <= n; i++){
                    cout << a[i];
                }
                cout << endl;
            }
            
            sinh();
           
        }
        
    }
}
