#include <bits/stdc++.h>
using namespace std;

#define ll long long


// n * n: xếp n quân hậu lên bàn cờ vua cỡ n * n sao cho không có 2 con hậu nào ăn nhau
// mỗi con hậu phải trên 1 dòng
int X[100], n = 8, cot[100], d1[100], d2[100], res = 0;
int a[100][100];
//X[i] = j : con hậu thứ hàng thứ i nằm ở cột j
// xây dụng cấu hình X : (X1, X2, ... , Xn)

void ktao(){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    memset(cot, 0, sizeof(cot));
    memset(d1, 0, sizeof(d1));
    memset(d2, 0, sizeof(d2));
}

void Try(int i){
    for(int j = 1; j <= n; j++){
        if(cot[j] == 0 && d1[i - j + n] == 0 && d2[i + j - 1] == 0){
            X[i] = j;
            cot[j] = 1;
            d1[i -j + n] = 1;
            d2[i + j - 1] = 1;
            if(i == n){
                int sum = 0;
                for(int k = 1; k <= n; k++){
                    sum += a[k][X[k]];
                }
                res = max(res, sum);
            }
            Try(i + 1);
            cot[j] = 0;
            d1[i -j + n] = 0;
            d2[i + j - 1] = 0;
        }
    }
}

int main(){
    int t;cin >> t;
    while(t--)
    {
        ktao();
        Try(1);
        cout << res << endl;
    }
    
}
