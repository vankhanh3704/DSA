#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector<vector<int>> hoanvi, chinhhop;
int x[100], a[100];
bool ok;

void Try(int i){
    for(int j = 1; j <= 3; j++){
        x[i] = j;
        if(i == 4){
            vector<int> tmp(x + 1, x + 5);
            chinhhop.push_back(tmp);
        }
        else Try(i + 1);
    }
}

void init(){
    int a[] = {1,2,3,4,5};
    do {
        vector<int> tmp(a, a + 5);
        hoanvi.push_back(tmp);
    } while (next_permutation(a, a + 5));
    Try(1);
}



int main(){
    init();
    int t;
    cin >> t;
    while(t--){
        for(int i = 1; i <= 5; i++) cin >> a[i];
        // 1 : +, 2 : -, 3 : *
        ok = false;
        int cnt = 0;
        for(auto it1 : hoanvi){
            for(auto it2 : chinhhop){
                ++cnt;
                int res = a[it1[0]];
                for(int k = 0; k < 4; k++){
                    if(it2[k] == 1){
                        res += a[it1[k + 1]];
                    }
                    else if (it2[k] == 2){
                        res -= a[it1[k + 1]];
                    }
                    else {
                        res *= a[it1[k + 1]];
                    }
                }
                if(res == 23){
                    ok = true;
                    break;
                }
            }
            if(ok) break;
        }
        cout << cnt << endl;
        if(ok == 1){
            cout << "YES\n";
        }
        else cout << "NO\n";
    }
}
