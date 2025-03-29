#include <bits/stdc++.h>
using namespace std;

#define ll long long

int n, k, a[1001], ans, s = 0;
bool visited[1001];

void Try(int sum, int cnt){
    if(cnt == k){
        ans = 1;
        return;
    }
    if(ans) return;
    for(int j = 1; j <= n; j++){
        if(!visited[j]){
            visited[j] = 1;
            if(sum == s){
                Try(0, cnt + 1);
            }
            else if(sum + a[j] <= s){
                Try(sum + a[j], cnt);
            }
        }
        visited[j] = false;
    }
}

void inp(){
    cin >> n >> k;
    s = 0;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        s += a[i];
    }
    if(s % k != 0){
        cout << "0\n";
    }
    s /= k;
    Try(0, 0);
    cout << ans << endl;
}



int main(){
    int t;
    cin >> t;
    while(t--){
        inp();
    }
    
}
