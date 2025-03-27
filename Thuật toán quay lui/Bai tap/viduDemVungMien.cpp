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
    cout << i << " " << j << endl; // xem cách loang
    a[i][j] = 0;
    for(int k = 0; k < 4; k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 1 && j1 >= 1 && i1 <= n && j1 <= n &&a[i1][j1] == 1){
            Try(i1, j1);
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
        int cnt = 0;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(a[i][j]){
                    ++cnt;
                    Try(i, j);
                }
            }
        }
        cout << cnt << endl;
        
    }
}
