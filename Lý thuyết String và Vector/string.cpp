#include <bits/stdc++.h>
using namespace std;

using ll = long long;


// Nhập vào 1 xâu ký tự
// tìm kí tự có số lần xuất hiện nhiều nhất trong xâu
// trong trường hợp có nhiều kí tự có cùng số lần xuất hiện nhiều nhất
// thì lấy kí tự có thứ tự từ điển nhỏ nhất
int main(){
    string s;
    getline(cin , s);

    // mảng kí tự: với i là kí tự, a[i] là số kí tự đó
    int a[256] = {0};
    int cnt = 0; char res;
    for(int i = 0; i < s.size(); i++){
        a[s[i]]++;
    }
    for(int i = 0; i < 256; i++){
        // nếu là >= thì là lấy kí tự có thứ tự từ điển lớn nhất
        if(a[i] > cnt){
            cnt = a[i];
            res = (char)i;
        }
    }
    cout << res << " " << cnt << endl;
    
}

