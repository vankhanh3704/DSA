#include <bits/stdc++.h>
using namespace std;


int X[100];
int n, k;

void in(){
    for(int i = 1; i <= k; i++){
        cout << X[i];
    }
}

void Try(int i){
    for(int j = X[i - 1] + 1; j <= n - k + i; j++){
        X[i] = j;
        if(i == k){
            in(); cout << endl;
        }
        else Try(i + 1);
    }
}


int main(){
    cin >> n >> k;
    Try(1);
}
