#include <bits/stdc++.h>
using namespace std;

using ll = long long;

// liệt kê các cặp số nguyên tố có tổng bằng n, với n chẵn > 2
const int maxN = 1e4;
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
    // mà có n 4 <= n <= 1e4
    sang();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n == 4) cout << 2 << " " << 2 << endl;
        else{
            for(int i = 3; i <= n / 2; i++){
                if(nt[i]){
                    if(nt[n - i]){
                        cout << i << " " << n - i << ", ";
                    }
                }
                
                
            }
            cout << endl;
        }
    }
    return 0;
}
