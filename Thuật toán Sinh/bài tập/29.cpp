#include <bits/stdc++.h>
using namespace std;

#define ll long long

int k;
int n;
bool ok = true;
int a[100];

bool vowel(char c){
    return c == 'A' || c == 'E';
}

bool check(string s){
    for(int i = 1; i <= s.size() - 2; i++){
        if(vowel(s[i] && !vowel(s[i - 1] && !vowel(s[i + 1])))){
            return false;
        }
    }
    return true;
}

int main(){
    char c;
    cin >> c;
    string s = "";
    for(int i = 'A'; i <= c; i++){
        s += i;
    }
    do {
        if(check(s)){
            cout << s << endl;
        }
    } while (next_permutation(s.begin(), s.end()));
    
}
