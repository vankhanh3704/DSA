#include <bits/stdc++.h>
using namespace std;

// hoán vị ngược
int n, k;
int a[101];
bool ok;
void ktao(){
    for(int i = 1; i <= n; i++){
        a[i] = n - i + 1; // Khởi tạo hoán vị lớn nhất
    }
}
void sinh(){
    int i = n - 1;
    while(i >= 1 && a[i] < a[i + 1]){ //
        --i;
    }
    if(i == 0) ok = false;
    else{
        int j = n;
        while(a[i] < a[j]) --j; //
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        ktao();
        ok = true;
        while(ok){
            for(int i = 1; i <= n; i++){
                cout << a[i];
            }
            cout << " ";
            sinh();
            
        }
        cout << endl;
    }
}
