#include <bits/stdc++.h>
using namespace std;

// đếm số lần xuất hiện của các kí tự trong xâu 2
// in ra theo thứ tự xuất hiện
int main(){
    string s;
    getline(cin , s);
    int cnt[256] = {0};
    for(char c : s){
        cnt[c]++;
    }
    for(char c : s){
        if(cnt[c] != 0){
            cout << (char)c << " " << cnt[c] << endl;
            // đánh dấu gặp lại các kí tự lặp lại nó sẽ không in ra nữa
            cnt[c] = 0;
        }
    }
}
//aaavdavad
//a 5
//v 2
//d 2
