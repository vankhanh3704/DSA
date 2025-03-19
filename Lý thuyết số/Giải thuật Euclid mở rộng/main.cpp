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
    }
}

int main(){
    extended_gcd(16, 10);
    cout << x << " " << y << " " << g << endl;
}
