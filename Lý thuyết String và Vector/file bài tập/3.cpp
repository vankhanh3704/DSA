#include <bits/stdc++.h>
using namespace std;

// đếm số lần xuất hiện của các kí tự trong xâu 1
int main(){
    string s;
    getline(cin , s);
    int cnt[256] = {0};
    for(char c : s){
        cnt[c]++;
    }
    for(int i = 0; i < 256; i++){
        if(cnt[i] != 0){
            cout << (char)i <<" " << cnt[i] << endl;
        }
    }
}
//aaavdavad
//a 5
//d 2
//v 2
