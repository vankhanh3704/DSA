#include <bits/stdc++.h>
using namespace std;

using ll = long long;

// Đếm số lượng chữ số 0 của n!
// đếm từ dưới lên của n! : 10! = 1 * 2 * 3 * 2 * 2 * 5 * 2 * 3 * 7 * 2 * 2 * 2 * 3 * 3 * 2 * 5:
// chỉ việc đếm trong n! có bao nhiêu cặp : 2 * 5 ~ số lượng chữ số 0
// tính bậc của 2, bậc của 5: cái này nhỏ hơn thì lấy
// degree(2), degree(5) :dùng công thức legendre
// tuy nhiên bậc của 2 luôn lớn hơn bậc của 5 => chỉ cần tính bậc của 5


int degree(int n, int k){
    int res = 0;
    for(int i = k; i <= n; i *= k){
        res += (n / i);
    }
    return res;
}

int main(){
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << degree(n, 5) << endl;
        cout << endl;
    }
    return 0;
}
