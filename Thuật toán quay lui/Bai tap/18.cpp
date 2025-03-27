#include <bits/stdc++.h>
using namespace std;

#define ll long long

char a[100][100];
int n, k , m;
string s;
vector<string> v;
bool visited[100][100];

set<string> dict;

int dx[8] = {-1,-1,-1, 0, 0 ,1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1,-1, 0, 1 };


void Try(int i, int j){
   
//    cout << s << endl;
    if(dict.count(s)){
        v.push_back(s);
    }
    for(int k = 0; k < 8; k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 1 && j1 >= 1 && i1 <= n && j1 <= m &&visited[i1][j1] == 0){
            s += a[i1][j1];
            visited[i1][j1] = 1;
            Try(i1, j1);
            visited[i1][j1] = 0;
            s.pop_back();
        }
    }
    
}

int main(){
    int t;
    cin >> t;
    while(t --){
        cin >> k >> n >> m;
        for(int i = 0; i < k; i++){
            string word ; cin >> word;
            dict.insert(word);
        }
        for(int i = 1; i <= n ; i++){
            for(int j = 1; j <= m; j++){
                cin >> a[i][j];
            }
        }
        memset(visited, 0, sizeof(visited));
        
        for(int i = 1; i <= n ; i++){
            for(int j = 1; j <= m; j++){
                s = "" + a[i][j];
                Try(i, j);
            }
        }
        sort(v.begin(), v.end());
        cout << v.size() << endl;
        for(string x : v){
            cout << x << " ";
        }
    }
}
