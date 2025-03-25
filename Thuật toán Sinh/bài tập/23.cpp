#include <bits/stdc++.h>
using namespace std;

#define ll long long

// số lộc phát chẵn
//
int n;
bool ok = true;
string s;
vector<string> res;

void ktao(){
    s = string(n, '6');
}

void sinh(){
    int i = s.size() - 1;
    while(i >= 0 && s[i] == '8'){
        s[i] = '6';
        --i;
    }
    if(i == -1) ok = false;
    else s[i] = '8';
 }

void init(){
    // 2^13 + 2^12 .... ~ 10^4
    for(int i = 1; i <= 13; i++){
        
        n = i; // sinh ra các xâu nhị phân có i bit
        ktao();
        ok = true;
        while(ok){
            string tmp = s;
            reverse(tmp.begin(), tmp.end());
            res.push_back(s + tmp);
            sinh();
        }
    }
}

int main(){
    int t; cin >> t;
//    int t = 1;
    init();
    cout << res.size() << endl;
    while(t--){
        cin >> n;
        for(int i = 0; i < n; i++){
            cout << res[i] << " ";
        }
        cout << endl;
        
    }
}
