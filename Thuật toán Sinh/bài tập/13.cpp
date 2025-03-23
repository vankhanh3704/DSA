#include <bits/stdc++.h>
using namespace std;

// xâu AB đặc biệt
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
    bool check = false;
    int dem = 0;
    for(int i = 1; i <= n; i++){
        // nếu là kí tự A
        if(a[i] == 0){
            dem++;
        }
        // gặp kí tự B thì reset
        else dem = 0;
        if(dem > k) return false;
        else if(dem == k) check = true;
    }
    return check;
}
int main(){

    cin >> n >> k;
    ktao();
    ok = true;
    // đề bài bắt sinh ra số lượng cấu hình hợp lệ
    vector<string> v;
    while(ok){
        
        if(check()){
            string tmp = "";
            for(int i = 1; i <= n; i++){
                if(a[i] == 0){
                    tmp += "A";
                }
                else tmp += "B";
            }
            v.push_back(tmp);
        }
        sinh();
    }
    cout << v.size() << endl;
    for(string x : v){
        cout << x << endl;
    }
}
