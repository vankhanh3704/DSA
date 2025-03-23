#include <bits/stdc++.h>
using namespace std;


// map<kiểu dữ liệu 1, kiểu dữ liệu 2> mp;
// theo thứ tự từ điển
// key : value
// key : độc nhất
// độ phức tạp các hàm : o logn
// find() : tìm key có xuát hiện trong map không
// count() : đếm số lần xuất hiện
// erase : xoá phần tử
int main(){
    map<int, int> mp;
    // lưu cặp integer
//    mp.insert({1, 2});
//    mp.insert({2, 3});
//    mp.insert({2, 5});
    // cách lưu khác
    mp[1] = 2;
    mp[2] = 3;
    mp[2] = 5;
    mp[100]++; // mp[100] = 1
    
    
    // for each
    for(auto x : mp){
        cout << x.first << " " << x.second << endl;
        cout << x.first << " " << mp[x.first] << endl;
    }
    // map lưu các cặp pair
    for(pair<int, int> x : mp){
        cout << x.first << " " << x.second << endl;
    }
    // iterator
    for(map<int, int>::iterator it = mp.begin() ; it != mp.end(); it++){
        cout << (*it).first << " " << (*it).second << endl;
    }
    
    // trả về 1 trong 2 giá trị : iterator của phần tử và mp.end()
    auto pos = mp.find(100);
    if(pos != mp.end()){
        cout << "tim thay "<<(*pos).first << " " << (*pos).second <<   endl;
        
    }
       else cout << "khong tim thay\n";
}
