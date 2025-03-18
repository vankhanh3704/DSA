#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int maxn = 10000001;
bool nt[maxn];


// ước chung lớn nhất
ll gcd(int a, int b){
    if( b== 0 ) return a;
    return gcd(b, a%b);
}


// bội chung nhỏ nhất
ll lcm(int a, int b){
    return a / gcd(a, b) * b;
}

int main(){
    int n;
    cin >> n;
    // hàm có sẵn nhưng lỗi khi chạy trên xcode
//    cout << __gcd(100, 200) << endl;
}
