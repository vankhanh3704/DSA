#include <bits/stdc++.h>
using namespace std;

#define ll long long

int a[100][100];
int n;
string s = "";
vector<string> v;

// thay đổi i : theo thứ tự 1,0 ; 0,-1 ; 0, 1 ; -1, 0 : DLRU
int dx[4] = {1, 0, 0 ,-1};
// thay đổi j
int dy[4] = {0, -1, 1, 0};

string path = "DLRU";
void Try(int i, int j){
    if(i == n && j == n){
        v.push_back(s);
    }
    
    for(int k = 0; k < 4; k++){
        int i1 = i + dx[k];
        int j1 = i + dy[k];
        if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n && a[i1][j1] == 1){
            s += path[k];
            a[i1][j1] = 0;
            Try(i1, j1);
            a[i1][j1] = 1;
            s.pop_back();
        }
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
