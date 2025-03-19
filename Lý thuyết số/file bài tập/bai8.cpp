#include <bits/stdc++.h>
using namespace std;

using ll = long long;


// Đếm số chính phương trong đoạn
// => khai căn 2 đầu


int main(){
    
    int t;
    cin >> t;
    while(t--){
        int l, r;
        cin >> l >> r;
        int c1 = sqrt(l), c2 = sqrt(r);
        // check cận dưới nếu nó không phải là số chính phương
        // bỏ qua duyệt thg tiếp theo
        if(c1 * c1 != l) c1++;
        for(int i = c1; i <= c2; i++){
            cout << i * i << " ";
        }
        cout << c2 - c1 + 1 << endl; // số lượng số chính phương
        cout << endl;
    }
    return 0;
}
