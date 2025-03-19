#include <bits/stdc++.h>
using namespace std;

using ll = long long;

// Phân tích 1 số nguyên dương thành tích các thừa số nguyên tố
const int maxN = 1e6;
int nt[maxN + 1];
// sàng ước nguyên tố nhỏ nhất
void sang(){
    for(int i = 0; i <= maxN; i++){
        nt[i] = i; // đầu tiên gán cho chúng nó mặc định là số nguyên tố
    }
    for(int i = 2; i <= sqrt(maxN); i++){
        // nếu như ước số nguyên tố cuả nó là chính nó
        if(nt[i] == i)
        {
            // duyệt các bội của nó
            for(int j = i * i; j <= maxN; j += i){
                //==j nghĩa là chưa xét, nếu như các bội của nó chưa được xét
                if(nt[j] == j){
                    nt[j] = i;
                }
                // còn khác nghĩa là số đó trước đấy đã có ước nguyên tố rồi
            }
        }
    }
}



int main(){
    // bài này có các testcase
    // mà có n 4 <= n <= 1e4
    sang();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        while (n != 1) {
            // in ra lần lượt ước số nguyên tố nhỏ nhất
            cout << nt[n] << " ";
            n /= nt[n];
        }
        cout << endl;
    }
    return 0;
}
