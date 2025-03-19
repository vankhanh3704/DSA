#include <bits/stdc++.h>
using namespace std;

using ll = long long;

// C[i][j] lưu tổ hợp chập j của i
ll C[1001][1001];
int mod = 1e7;
void init(){
    // do đề bải 0 <= k <= n <= 1000
    for(int i = 0; i <= 1000; i++){
        // theo tam giác pascal
        for(int j = 0; j <= i; j++){
            if(j == 0 || j == i){
                C[i][j] = 1;
            }
            else{
                // công thức Pascal
                C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
                C[i][j] %= mod;
                
            }
        }
    }
}


int main(){
    int t;
    cin >> t;
    init();
    while(t--){
        int n, k;
        cin >> n >> k;
        cout << C[n][k] << endl;
    }
}
