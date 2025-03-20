#include <bits/stdc++.h>
using namespace std;

using ll = long long;


// stringstream: biến xâu thành luồng : tách từ
int main(){
    string s = "ngon ngu lap trinh";
    stringstream ss(s); // mặc đinh dấu cách
    string word;
    int cnt = 1;
    while(ss >> word){
        cout << "Từ thứ " << cnt << " đọc được là: " << word << endl;
        cnt++;
    }
    s = "ngon---ngu-lap----trinh";
    cnt = 1;
    stringstream ss2(s);
    while(getline(ss2, word, '-')){
        cout << "Từ thứ " << cnt << " đọc được là: " << word << endl;
        cnt++;
    }
}

