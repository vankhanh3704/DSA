#include <bits/stdc++.h>
using namespace std;

#define ll long long

// xâu nhị phân đặc biệt
//
int n;
bool ok = true;
int X[100], a[100];
vector<string> res;

void ktao(){
    for(int i = 1; i <= n; i++){
        X[i] = 0;
    }
}
void sinh(){
    int i = n;
    while(i >= 1 && X[i] == 1){
        X[i] = 0;
        --i;
    }
    if(i == 0) ok = false;
    else X[i] = 1;
}

bool check(){
    for(int i = 1; i < n; i++){
        if(X[i] == X[i + 1]) return false;
    }
    return true;
}


int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        ktao();
        ok = true;
        while(ok){
            if(check()){
                for(int i = 1; i <= n; i++){
                    cout << X[i];
                }
                cout << endl;
            }
           
            sinh();
        }
    }

}
