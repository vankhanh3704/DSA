#include <bits/stdc++.h>
using namespace std;

// chuyển xâu thành in thường
int main(){
    string s;
    getline(cin , s);
    for(int i = 0; i < s.size(); i++){
        s[i] = tolower(s[i]);
    }
    cout << s << endl;
    return 0;
}
//Python JAVA @
//python java @
