#include <bits/stdc++.h>
using namespace std;

using ll = long long;


// Tìm x sao cho N! chia hết cho K^x với x là số lớn nhất
int degree(int n, int k){
    int ans = 0;
    for(int i = k; i <= n; i+= k){
        int m = i;
        while(m % k == 0){
            ans++;
            m /= k;
        }
    }
    return ans;
}

// áp dụng công thức Legendre
// nhanh hơn công thức trên
int degree2(int n, int k){
    int res = 0;
    for(int i = k; i <= n; i *= k){
        res += (n / i); // chia cho luỹ thừa của k
    }
    return res;
}
int main(){
    cout<< degree(10, 3) << endl;
    cout << degree2(10, 3)<< endl;
}
