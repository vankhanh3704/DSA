#include <bits/stdc++.h>
using namespace std;

// đếm số lượng chữ cái, kí tự số, kí tự đặc biệt trong xâu
int main(){
    string s;
    getline(cin , s);
    int cc = 0, cs = 0, db = 0;
    for(int i = 0; i < s.size(); i++){
        if(isalpha((s[i]))){
            cs++;
        }
        else if(isdigit((s[i]))){
            cc++;
        }
        else db++;
    }
    cout << cs <<" "<< cc << " " << db << endl;
    return 0;
}
//Python 123@@
//6 3 3
