#include <bits/stdc++.h>
using namespace std;

int a[100][100];
string s = "";
int n;

void Try(int i, int j){
    if(i == n && j == n){
        cout << s << endl;
    }
    // gan nuoc di tiep theo khi vi tri hien tai dang o Ô i , j
    // i + 1, j là ô đi xuống
    if(i + 1 <= n && a[i + 1][j] == 1){
        s += "D";
        a[i + 1][j] = 0; // Đánh dấu đã đi qua o nay` roi`
        Try(i + 1, j); // gọi đệ quy tìm đường đi tiếp theo
        s.pop_back(); // xoá nước đi cuối cùng
        a[i + 1][j] = 1;
    }
    // đi sang phải
    if(j + 1 <= n && a[i][j + 1] == 1){
        s += "R";
        a[i][j + 1] = 0; // Đánh dấu đã đi qua o nay` roi`
        Try(i, j + 1); // gọi đệ quy tìm đường đi tiếp theo
        s.pop_back(); // xoá nước đi cuối cùng
        a[i][j + 1] = 1;
    }

}



int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                cin >> a[i][j];
            }
        }
        Try(1, 1);
        cout << endl;
    }
}
