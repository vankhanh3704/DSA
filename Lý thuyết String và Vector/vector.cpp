#include <bits/stdc++.h>
using namespace std;

using ll = long long;


// vector<kieudulieu> ten;
// size()
// push_back(): đẩy phần tử vào cuối vector
// pop_back() xoá 1 phần tử cuối vector
// iterator: .begin() : trỏ đến phần tử đầu tiên
// .end() : trỏ vào SAU phần tử cuối cùng
// to_string: chuyển thành xâu
// stoi() : xâu -> int
// stoll() : xâu -> ll;
// reverse() : lật ngược xâu : reverse(s.begin(), s.end())
int main(){
    vector<int> a;
    a.push_back(100);
    a.push_back(300);
    for(int i = 0; i < a.size(); i++){
        cout << a[i] << " ";
    }
    //iterator
    vector<int>::iterator it;
    // duyệt theo cách iterator
    for(it = a.begin(); it != a.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    cout << a.size() << endl;
    a.pop_back();
    cout << a.size() << endl;
    
    // to_string
    ll n = 32147193875134093;
    string s = to_string(n);
    cout << s << endl;
    
}

