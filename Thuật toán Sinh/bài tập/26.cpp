#include <bits/stdc++.h>
using namespace std;

#define ll long long

int n, k;
bool ok = true;
int a[100];
vector<string> res;

void ktao(){
    for(int i = 1; i <= n; i++){
        a[i] = i;
    }
}
void sinh(){
    int i = k;
    while(i >= 1 && a[i] == n - k + i){
        --i;
    }
    if(i == 0) ok = false;
    else{
        a[i]++;
        for(int j = i + 1; j <= k; j++){
            a[j] = a[j - 1] + 1;
        }
    };
}

int main(){
    int t; cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        set<int> se;
        for(int i = 0; i < x; i++){
            int x; cin >> x;
            se.insert(x);
        }
        n = se.size();
        k = y;
        vector<int> v;
        for(int x : se){
            v.push_back(x);
        }
        ktao();
        ok = true;
        
        while(ok){
            for(int i = 1; i <= k; i++){
                cout << v[a[i] - 1] << " ";
            }
            cout << endl;
            sinh();
        }
    }

}
