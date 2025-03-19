#include <bits/stdc++.h>
using namespace std;

using ll = long long;

// kiểm tra số nguyên tố dùng sàng số nguyên tố
const int maxN = 1e6;
int nt[maxN + 1];
void sang(){
    for(int i = 0; i <= maxN; i++){
        nt[i] = true;
    }
    nt[0] = nt[1] = false;
    for(int i = 2; i <= sqrt(maxN); i++){
        if(nt[i]){
            for(int j = i * i; j<= maxN; j+= i){
                nt[j] = false;
            }
        }
    }
}


int main(){
    // bài này có các testcase
    // mà có n 0 <= n <= 1e6
    // nên là dùng sàng số nguyên tố kiểm tra hết luôn
    sang();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(nt[n]){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}
