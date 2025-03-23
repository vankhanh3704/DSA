#include <bits/stdc++.h>
using namespace std;
#include <algorithm>

// set
// các phần tử trong set: sắp xếp tăng dần, ko lặp

// .insert(value) : thêm 1 phần tử vào set
// .size() : trả về số lượng phần tử trong set
// find() : O( log(n)): tìm kiếm phần tử trong set có nằm trong set
// count() : O(log(n)) : Đếm số lần xuất hiện 1 phần tử trong set
// erase() :O(log(n))
// cách dùng : đếm số lượng phần tử khác nhau trong mảng


// multiset : là set nhưng các phần tử có thể trùng nhau 
int main(){
    // khai báo
    set<int> se;
    se.insert(5);
    se.insert(7);
    cout << se.size() << endl;
    
    // duyệt các phần tử : for each
    for(int x : se){
        cout << x << " ";
    }
    cout << endl;
    // dùng iterator
    for(set<int>::iterator it = se.begin();it != se.end(); it++){
        cout << *it << " ";
    }
    
    // find() : trả về iterator
    // nếu không tìm thấy nó trả về se.end()
    // nên là phải so sánh với se.end()
    if(se.find(5) != se.end()){
        cout << " tim thay " << endl;
    }
    else cout << " ko tim thay " << endl;
    
    // count()
    if(se.count(5) == 1){
        cout << " tim thay" << endl;
    }
    else cout << " khong tim thay " << endl;
}
         
