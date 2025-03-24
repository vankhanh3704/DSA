#include <bits/stdc++.h>
using namespace std;

#define ll long long

// sinh ra các xâu nhị phân có độ dài n / 2
// sinh ra độ dài nào có độ dài n/2 thì lật ngược nó xong đó nối vào đuôi xâu ban đầu
int n, a[1005];
bool ok = true;
string s;
vector<string> res;
void sinh(){
    int i = s.size() - 1;
    while(i >= 0 && s[i] == '1'){
        s[i] = '0';
        --i;
    }
    if(i == -1) ok = false;
    else s[i] = '1';
 }

void init(){
    for(int i = 1; i <= 15; i++){
        ok = 1;
        s = string(i, '0');
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
    while(t--){
        cin >> n;
        ok = true;
        for(string x : res){
            if(x.size() <= n) cout << x << " ";
            else break;
        }
        cout << endl;
        
    }
}
