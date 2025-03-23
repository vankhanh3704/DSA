#include <bits/stdc++.h>
using namespace std;

// tập con kế tiếp
int n, k, a[1005];

void sinh(){
    int i = k;
    while(i >= 1 && a[i] == n - k + i){
        --i;
    }
    if(i == 0){
        // cấu hình kế tiếp của cấu hình cuối cùng là cấu hình đầu tiên
        for(int i = 1; i <= k; i++){
            a[i] = i;
        }
    }
    else{
        a[i]++;
        for(int j = i + 1; j <= k; j++){
            a[j] = a[j - 1] + 1;
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i = 1; i <= k; i++) cin >> a[i];
        sinh();
        for(int i = 1; i <= k; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
}
