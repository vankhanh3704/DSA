#include <bits/stdc++.h>
using namespace std;


int X[100];
int n, k;
int daXet[100]; // true ! gía trị i đã được dùng false ngược lại
int cnt = 0;
void in(){
    for(int i = 1; i <= k; i++){
        cout << X[i];
    }
}

void Try(int i){
    for(int j = 1; j <= n; j++){
        X[i] = j;
        if(i == k){
            in(); cout << endl;
        }
        else {
            Try(i + 1);
        }
    }
        
}



int main(){
    cin >> n >> k;
    memset(daXet, 0 , sizeof(daXet)); // memset cho tất cả các giá trị = 0
    Try(1);
}
