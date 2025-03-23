#include <bits/stdc++.h>
using namespace std;

// xâu AB
int n, a[1005];
bool ok;
void ktao(){
    for(int i = 1; i <= n; i++){
        a[i] = 0;
    }
}

void sinh(){
    int i = n;
    while(i >= 1 && a[i] == 1){
        a[i] = 0;
        --i;
    }
    if(i == 0){
        ok = false;
    }
    else{
        a[i] = 1;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        ktao();
        ok = true;
        while(ok){
            for(int i = 1; i <= n; i++){
                if(a[i] == 0){
                    cout << 'A';
                }
                else cout << 'B';
                
            }
            cout << " ";
            sinh();
            
        }
        cout << endl;
    }
}
