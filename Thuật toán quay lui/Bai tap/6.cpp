#include <bits/stdc++.h>
using namespace std;

// dãy con có tổng bằng k
int X[100];
int a[100];
int n, k;
int sum = 0;

void Try(int i, int pos){
    for(int j = pos; j <= n; j++){
        X[i] = a[j];
        sum += a[j];
        if(sum == k){
            cout <<"[ ";
            for(int l = 1; l <= i; l++){
                cout << X[l] << " ";
            }
            cout << "] ";
        }
        else{
            Try(i + 1, j + 1);
        }
        sum -= a[j];
            
    }
}



int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i = 1; i <= n; i++) cin >> a[i];
        sort(a + 1, a + n + 1);
        Try(1, 1);
        cout << endl;
    }
}
