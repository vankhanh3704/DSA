#include <bits/stdc++.h>
using namespace std;
#include <algorithm>

#define fi first
#define se second


int main(){
    // khai báo
    //pair<kiểu dữ liệu 1, kiểu dữ liệu 2> p;
    // first
    // second
    // chỉ sử dụng pair khi 2 số đi kèm với nhau cùng lắm là 3 số 
    pair<int ,int> p;
    
    // make_pair(x,y) => trả về 1 pair từ cặp x, y
    pair<int, int> p1 = make_pair(100, 200);
    cout << p1.fi << endl;
    cout << p1.second << endl;
    
    pair<string, int> p2 = make_pair("nguyen van a", 1);
    cout << p2.fi << " " << p2.se << endl;
    
    // khai báo chuẩn c++ mới
    pair <string, int> p3 {"Nguyen van a", 2};
    cout << p3.fi << " " << p3.se << endl;
    
    // lưu 1 mảng các pair
    pair<int ,int> p4[100];
//    int n; cin >> n;
//    for(int i = 0; i < n; i++){
//        cin >> p4[i].fi >> p4[i].se;
//    }
//    for(int i = 0; i < n; i++){
//        cout <<p4[i].fi << " " << p4[i].se << endl;
//    }
    
    vector<pair<int,int> > v;
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        int x, y; cin >> x >> y;
        v.push_back({x,y});
//        v.push_back(make_pair(x, y));
    }
    // for each
    for(pair<int, int> x : v){
        cout << x.fi << " " << x.se<< endl;
    }
    // for auto
    for(auto x : v){
        cout << x.fi << " " << x.se << endl;
    }
    
    // pair trong set
    // xét first nhỏ trước
    // nếu bằng thì xét theo second
    set<pair<int,int>> se;
    se.insert({1, 2});
    se.insert({3, 4});
    se.insert({1, 1});
    se.insert({3, 4});
    for(auto x : se){
        cout << x.fi << " " << x.se << endl;
    }
}
         
