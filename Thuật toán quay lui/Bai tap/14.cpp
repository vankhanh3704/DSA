#include <bits/stdc++.h>
using namespace std;

#define ll long long
int n, S,a[100], X[100];
int ok;
void inp(){
    cin >> n >> S;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
}

void Try(int sum, int i, int pos){
    if(sum == S){
        cout << "[";
        for(int j = 1; j < i; j++){
            cout << X[j];
            if(j == i - 1) cout << "]";
            else cout << " ";
        }
        ok = 1;
        return;
    }
    for(int j = pos; j <= n; j++){
        if(sum + a[j] <= S){
            X[i] = a[j];
            Try(sum + a[j], i + 1, j);
        }
    }
}


int main(){
    int t;
    cin >> t;
    while(t--){
        inp();
        Try(0,1,1);
        if(!ok) cout << "-1\n";
        else cout << endl;
    }
    
}
