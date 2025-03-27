#include <bits/stdc++.h>
using namespace std;

#define ll long long

int a[100][100];
int n;
string s = "";
vector<string> v;


void Try(int i, int j){
    if(i == n && j == n){
        v.push_back(s);
    }
    
    if(i + 1 <= n && a[i + 1][j] == 1){
        s += "D";
        a[i + 1][j] = 0;
        Try(i + 1, j);
        s.pop_back();
        a[i + 1][j] = 1;
    }
    if(j - 1 >= 1 && a[i][j - 1] == 1){
        s += "L";
        a[i][j - 1] = 0;
        Try(i, j - 1);
        a[i][j - 1] = 1;
        s.pop_back();
    }
    if(j + 1 <= n && a[i][j + 1] == 1){
        s += "R";
        a[i][j + 1] = 0;
        Try(i , j + 1);
        s.pop_back();
        a[i][j + 1] = 1;
    }
    if(i - 1 >= 1 && a[i - 1][j] == 1){
        s += "U";
        a[i - 1][j] = 0;
        Try(i - 1, j);
        a[i - 1][j] = 1;
        s.pop_back();
    }
}

int main(){
    int t;
    cin >> t;
    while(t --){
        cin >> n;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                cin >> a[i][j];
            }
        }
        // check 2 vị trí bắt đầu và kết thức
        if(a[1][1] && a[n][n]){
            a[1][1] = 0;
            Try(1, 1);
        }
        if(v.size() == 0){
            cout << "-1" << endl;
        }
        else{
            for(string x : v){
                cout << x << endl;
            }
        }
        
    }
}
