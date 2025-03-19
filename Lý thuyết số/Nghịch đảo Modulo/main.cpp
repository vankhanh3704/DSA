#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int x, y, g; // g ~ gcd(a, b)


// ax + by = gcd(a, b)
void extended_gcd(int a, int b){
    if( b == 0){
        // a * x + b * y = g
        // 1 * a + 0 * 0 = g
        x = 1;
        y = 0;
        g = a;
    }
    else{
        // gọi đệ quy
        extended_gcd(b, a % b);
        // lúc này đã có gía trị x1, y1
        int x1 = x; // lưu giá trị x1
        x = y; // ~ x = y1
        y = x1 - (a/b) * y; // y = x1 - (a/b) * y1;
        // xog để kết thúc đệ quy nó sẽ phải lặp lại tính x, y cho tới khi nào kết thúc thg đệ quy có giá trị a, b ban đầu, cụ thể trong bài này là extended_gcd(16, 10)
    }
}

// nghịch đảo modulo của a chính là x
// trong thuật toán euclid mở rộng
// với gcd(a, m) = 1, ax + my = 1
int modular_inverse(int a, int m){
    
    extended_gcd(a, m);
    // chính là x
    return (x % m + m) % m; // tránh khi mà x < 0
}

// a ^ b % c
ll powMod(ll a, ll b, ll c){
    int res = 1;
    while(b){
        if(b % 2 == 1){
            res *= a;
            res %= c;
        }
        b /= 2;
        a *= a;
        a %= c;
    }
    return  res;
}

int main(){
    
    int a, b, m;
    cin >> a >> b >> m;
    // Tính ( a * b) % m với b là nghịch đảo modul của a
    cout << modular_inverse(b, m) << endl;
    cout << (a * modular_inverse(b, m) % m) << endl;
    // với m là số nguyên tố
    a = 45;
    m = 29;
    cout << powMod(a, m - 2, m) << endl;
    cout << modular_inverse(45, 29) << endl;
    
}
