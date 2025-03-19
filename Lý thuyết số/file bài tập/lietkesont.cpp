#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int maxN = 1e6;
int a[maxN + 1];

void sang(){
    for(int i = 0; i <= maxN; i++){
        a[i] = true;
    }
    a[0] = a[1] = false;
    for(int i = 2; i <= sqrt(maxN); i++){
        if(a[i]){
            for(int j = i * i; j <= maxN ; j += i){
                a[j] = false;
            }
        }
    }
}

// in ra cac so nguyen to khong vuot qua n
void ptSoNt(int n){
    for(int i = 1; i <= n; i++){
        if(a[i]){
            cout << i << " ";
        }
    }
    cout << endl;
}


int main(){
    
    int n;
    cin >> n;
    sang();
    ptSoNt(n);
}
