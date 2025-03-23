#include <bits/stdc++.h>
using namespace std;

// hoán vị kế tiếp
int n, a[1005];

void sinh(){
    int i = n - 1;
    while(i >= 1 && a[i] > a[i + 1]){
        --i;
    }
    if(i == 0){
        // cấu hình kế tiếp của cấu hình cuối cùng là cấu hình đầu tiên
        for(int i = 1; i <= n; i++){
            a[i] = i;
        }
    }
    else{
        int j = n;
        while(a[i] > a[j]) --j;
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 1; i <= n; i++) cin >> a[i];
        sinh();
        for(int i = 1; i <= n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
}
