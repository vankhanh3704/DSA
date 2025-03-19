#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int maxn = 10000001;
bool nt[maxn];


// ước chung lớn nhất : dùng giải thuật Euclid
ll gcd(int a, int b){
    if( b== 0 ) return a;
    return gcd(b, a%b);
}


// bội chung nhỏ nhất
ll lcm(int a, int b){
    return a / gcd(a, b) * b;
}

// Tìm ước chung lớn nhất của các phần tử trong 1 mảng
int main(){
    int n;
    cin >> n;
    int a[1000];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    ll res = a[0];
    for(int i = 0; i < n; i++){
        res = gcd(res, a[i]);
    }
    cout << res;
}
