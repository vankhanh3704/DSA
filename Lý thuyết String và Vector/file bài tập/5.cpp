#include <bits/stdc++.h>
using namespace std;

// in ra kí tự có tần suất xuất hiện nhiều nhất trong xâu
int main(){
    string s;
    getline(cin , s);
    int cnt[256] = {0};
    for(char c : s){
        cnt[c]++;
    }
    int max = 0;// đánh dấu số lần xuất hiện nhiều nhất
    char res; // đánh dấu kí tự
    for(int i = 0; i < 256; i++){
        // phải lớn hơn bằng để lấy kí tự có thứ tự từ điển lớn nhất
        if(cnt[i] >= max){
            max = cnt[i];
            res = i;
        }
    }
    cout << res << endl;
    
}
//bbbaaa
//b
