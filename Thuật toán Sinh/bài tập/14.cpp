#include <bits/stdc++.h>
using namespace std;

// tập quân sự
int n, k;
int a[101];
set<int> se;
bool ok;
void ktao(){
    for(int i = 1; i <= n; i++){
        a[i] = 0;
    }
}
void sinh(){
    int i = k;
    while(i >= 1 && a[i] == n - k + i){
        --i;
    }
    // nhóm cuối cùng tất cả được nghỉ
    // => lấy luôn k
    if(i == 0){
        cout << k << endl;
    }
    else{
        a[i]++;
        for(int j = i + 1; j <=k ; j++){
            a[j] = a[j - 1] + 1;
        }
        int cnt = 0;
        for(int i = 1; i <= k; i++){
            if(se.count(a[i]) == 1){
                cnt++;
            }
        }
        cout << k - cnt << endl;
    };
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i = 1; i <= k; i++){
            cin >> a[i];
            se.insert(a[i]);
        }
        sinh();
        // reset lại se
        se.clear();
    }
    
}
