// các bài toán có kết quả quá lớn
// ng ta không yêu cầu in ra chính xác với kết quả đấy
// mà in ra kết quả đấy với số dư nào đấy (thông thường là 10^9 + 7)

// công thức: (A + B) % C = ((A % C) + (B % C)) % C
// đối với trừ: (A - B) % C = ((A % C) - (B % C) + C) % C
//(A * B) % C = ( (A % C) * (B % C) ) % C
// (A^B)% C = (A % C)^B % C
// (A/B) % C = (A%C * B^-1) % C

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

// a ^ b % c
ll powMod(ll a, ll b, ll c){
    int res = 1;
    // chia mod luôn nhưng bên dưới vẫn phải mod lại
    a %= c;
    for(int i = 1; i <= b; i++){
        res *= a;
        // vẫn phải mod lại
        res %= c;
    }
    return res % c;
}

// dùng đệ quy
// binary exponentiation: tính luỹ thừa a: a ^ b: tối ưu
ll binPow(ll a, ll b){
    if(b == 0) return 1;
    ll x = binPow(a, b/2); // a ^ (b/2)
    if(b % 2 == 0) return x * x;
    return x * x * a;
}

// dựa theo cách tính nhị phân
ll binPow2(ll a, ll b){
    ll res = 1;
    // dựa theo số nhị phân của a ^ b
    while(b != 0){
        if(b % 2 == 1){
            res *= a;
        }
        b /= 2;
        a *= a;
    }
    return res;
}


int main(){
    cout << powMod(1032, 1e6, 10)<<endl; // xem ví dụ ảnh
    cout << binPow(2, 22)<< endl;
    int n;
    int k;
    cin >> n >> k;
    int a[n];
    for(int i = 0;i < n; i++) cin >> a[i];
    int res = 0;
    // tính đồng dư của 1 mảng tổng
    // làm bằng cách (lấy dư của 1 số cộng với số tiếp theo) xong lại chia dư tiếp
    for(int i = 0; i < n; i++){
        
        res = res + a[i] % k;
        res %= k;
    }
    cout << res<<endl;
    
}
