#include <bits/stdc++.h>
using namespace std;

#define ll long long

int k;
int n;
bool ok = true;
int a[100];

void ktao(){
    for(int i = 1; i <= n; i++){
        a[i] = 1;
    }
}

void sinh(){
    int i = n;
    while(i >= 1 && a[i] == n){
        --i;
    }
    if(i == 0) ok = false;
    else{
        a[i] ++ ;
        for(int j = i + 1; j <= n; j++){
            a[j] = 1;
        }
    }
}

int main(){
    cin >> n;
    string s = "";
    vector<string> hoanvi;
    // vs n = 5 => s : ABCDE
    for(int i = 1; i <= n; i++){
        s += 'A' + i - 1;
    }
    do{
        hoanvi.push_back(s);
    }while(next_permutation(s.begin(), s.end()));
    vector<string> chinhHopLap;
    ok = true;
    ktao();
    while(ok){
        string tmp = "";
        for(int i = 1; i <= n; i++){
            tmp += to_string(a[i]);
        }
        chinhHopLap.push_back(tmp);
        sinh();
    }
    for(string x : hoanvi){
        for(string y : chinhHopLap){
            cout << x << y << endl;
        }
    }
}
