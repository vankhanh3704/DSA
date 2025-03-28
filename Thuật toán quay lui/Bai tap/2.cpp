#include <bits/stdc++.h>
using namespace std;

#define ll long long

int n, k, s, ans = 0;
int a[100];

void Try(int i){
    if(i == 0){
        return;
    }
    else{
        cout << "[";
        for(int j = 1; j <= i; j++){
            cout << a[j];
            if(j == i) cout << "]\n";
            else cout << " ";
        }
    }
    // xây dựng mảng : chỉ duyệt tới thằng i - 1 thôi
    for(int j = 1; j < i; j++){
        a[j] += a[j + 1];
    }
    // do mình truyền n vào : ví dụ n = 5
    Try(i - 1);
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
