#include <bits/stdc++.h>
using namespace std;

// chọn số từ ma trận
int n, k;
int a[101];



int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        int mt[n + 1][n + 1];
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                cin >> mt[i][j];
            }
        }
        vector<vector<int> > v;
        // cấu hình đầu tiên
        for(int i = 1; i <= n; i++) a[i] = i;
        do{
            int sum = 0;
            for(int i = 1; i <= n; i++){
                sum += mt[i][a[i]];
            }
            if(sum == k){
                vector<int> tmp(a + 1, a + n + 1);
                v.push_back(tmp);
            }
            
        }
        while (next_permutation(a + 1, a + n + 1));
        cout << v.size() << endl;
        for(auto it : v){
            for(int x : it){
                cout << x << " ";
            }
            cout << endl;
        }
    }
    
}
