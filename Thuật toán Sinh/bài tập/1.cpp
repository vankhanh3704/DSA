#include <bits/stdc++.h>
using namespace std;

// xâu nhị phân kế tiêp

int main(){
    int t;
    cin >> t;
    while(t--){
        string s; cin >> s;
        int i = s.size() - 1;
        while(i >= 0 && s[i] == '1'){
            s[i] = '0';
            --i;
        }
        // tránh trường hợp truy cập không hợp lệ
        if(i != -1){
            s[i] = '1';
        }
        cout << s << endl;
    }
}
