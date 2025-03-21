#include <bits/stdc++.h>
using namespace std;
#include <algorithm>


// Sắp xếp, tìm kiếm
// sort(a, a + n) : sắp xếp tăng dần mảng a có n phần tử
// sort(a, a + n, greater<int>() ) : Sắp xếp giảm dần
// sort(v.begin(), v.end()); // sắp xếp vector tăng dần
//sort(v.begin(), v.end(), greater<int>()); // sắp xếp vector giảm dần
// sort string cx tương tự như vector
// sort :NOT quick sort
// thuật toán không ổn định : thứ tự ban đầu bị mất đi

// comparator
// true : bạn muốn a đứng trước b khi sắp xếp
// false: a đứng sau b khi sắp xếp
// ban đầu a đứng trước
bool cmp(int a, int b){
    if(a < b) return true;
    return false;
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n, cmp);
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}
