#include <bits/stdc++.h>
using namespace std;

#define ll long long

int n, k, s, ans = 0;
int X[100];

void input(){
    cin >> n >> k >> s;
}
int cnt = 0;

// cach 1 : lam kieu thong thuong
void Try(int i){
    ++cnt; // dem loi goi de quy
    for(int j = X[i - 1] + 1; j <= n - k + i; j++){
        X[i] = j;
        if(i == k){
            int sum = 0;
            for(int j = 1; j <= n; j++){
                sum += X[j];
            }
            if(sum == s) ++ans;
        }
        else Try(i + 1);
    }
}
// kiểu chia nhánh và có cần
void Try2(int sum, int cnt, int pos){
    if(sum == s && cnt == k){
        ++ans;
    }
    else{
        for(int j = pos; j <= n; j++){
            // cận
            if(sum + j <= s && cnt + 1 <= k)
                Try2(sum + j, cnt + 1, j + 1);
        }
    }
}

int main(){
    while(1){
        cin >> n >> k >> s;
        if(n + k + s == 0) break;
        ans = 0;
        Try(1);
        cout << ans <<" " << cnt << endl;
    }
}
