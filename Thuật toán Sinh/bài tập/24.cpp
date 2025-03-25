#include <bits/stdc++.h>
using namespace std;

#define ll long long

// các tập con của mảng
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

bool cmpz(string a, string b){
    if(a.size() != b.size()) return a.size() < b.size();
    return a < b;
}


int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    vector<string> res;
    ktao();
    sinh(); // bỏ qua cấu hình đầu tiên 000...
    while(ok){
        string tmp = "";
        for(int i = 1; i <= n; i++){
            if(X[i]) tmp += to_string(a[i]) + " ";
        }
        res.push_back(tmp);
        
        sinh();
    }
    sort(res.begin(), res.end(), cmpz);
    for(string x : res){
        cout << x << endl;
    }
}
