#include <bits/stdc++.h>
using namespace std;

#define ll long long

int n, k, s, ans = 0;
int a[100];

void Try(int i){
    if(i == 0){
        return;
    }
    // đi xây dựng dòng ở dưỡi
    for(int j = 1; j < i; j++){
        a[j] += a[j + 1];
    }
    Try(i - 1);
    cout << "[";
    for(int j = 1; j <= i; j++){
        cout << a[j];
        if(j == i) cout << "]\n";
        else cout << " ";
    }
    for(int j = i; j >= 1; j--){
        a[j] -= a[j + 1];
    }
}


int main(){
    int t; cin >> t;
    
    while(t--){
        cin >> n;
        for(int i = 1;i <= n; i++){
            cin >> a[i];
        }
        Try(n);
    }
}
