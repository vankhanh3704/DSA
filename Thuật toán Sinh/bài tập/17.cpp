#include <bits/stdc++.h>
using namespace std;

#define ll long long

// Bội số
// sinh ra xâu nhị phân có số 0,9
int n, k;
int a[101];
bool ok = true;

ll res[501]; // lưu các bội số của các số từ 1 - 500
vector<string> ans; // lưu các xâu nhị phân 09
string s;
void sinh(){
    int i = s.size() - 1;
    while(i >= 0 && s[i] == '9'){
        s[i] = '0';
        --i;
    }
    if(i == -1){
        ok = false;
    }
    else s[i] = '9';
}

int main(){
    
    s = "0000000000000"; // 13 bit
    // s = string(13, '0')
    ok = true;
    while(ok){
        ans.push_back(s);
        
        sinh();
    }
    // kiểm tra các xâu mình sinh ra có đủ điều kiện bội các số từ 1-500 hay ch
    for(int i = 1; i <= 500 ; i++){
        for(string x : ans){
            ll tmp = stoll(x);
            if(tmp != 0 && tmp % i == 0){
                res[i] = tmp;
                break;
            }
        }
    }
    // các xâu hiển thị có thể chia hết cho các số từ 1 - > 500
    // khi nào cnt == 500 thời số bit của xâu mới đúng -> dòng 29 cứ tăng bit lên cho tới khi cnt == 500
//    int cnt = 0;
//    for(int i = 1; i <= 500; i++){
//        cnt += res[i] != 0; // cộng số lượng
//        cout << res[i] << endl;
//    }
//    cout << cnt << endl;
    
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << res[n] << endl;
    }
}
