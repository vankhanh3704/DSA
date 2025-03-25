#include <bits/stdc++.h>
using namespace std;

#define ll long long

int k;
int n;
bool ok = true;
int a[100];

bool check(int a[], int n){
    for(int i = 0; i < n - 1; i++){
        if(abs(a[i] - a[i + 1]) == 1){
            return false;
        }
    }
    return true;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            a[i] = i + 1;
        }
        do {
            if(check(a, n)){
                for(int i = 0; i < n; i++){
                    cout << a[i];
                }
                cout << endl;
            }
        } while (next_permutation(a , a + n));
    }
    
}
