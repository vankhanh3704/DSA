#include <bits/stdc++.h>
using namespace std;

#define ll long long

int n, a[1005];
bool ok = true;


int main(){
//    int t; cin >> t;
    int t = 1;
    while(t--){
        cin >> n;
        string a[n + 1]; // mảng lưu các string
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        sort(a + 1, a + n + 1); // phải sắp xếp từ điển trước khi hoán vị
        do{
            for(int i = 1; i <= n; i++){
                cout << a[i] << " ";
            }
            cout << endl;
        }while(next_permutation(a + 1, a + n + 1));
    }
}
