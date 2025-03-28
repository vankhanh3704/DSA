#include <bits/stdc++.h>
using namespace std;

#define ll long long

int n, m, ans, a[100][100];
void inp(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
}

void Try(int i, int j){
    if(i == n && j == m){
        ++ans;
        return;
    }
    if(i + 1 <= n){
        Try(i + 1, j);
    }
    if(j + 1 <= m){
        Try(i, j + 1);
    }
}


int main(){
    int t; cin >> t;
    
    while(t--){
        inp();
        ans = 0;
        Try(1, 1);
        cout << ans << endl;
    }
}
