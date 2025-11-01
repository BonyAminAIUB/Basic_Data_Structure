#include <bits/stdc++.h>
using namespace std;

int main(){
    // list<int> l;
    // cout << l.size() << endl; // 0

    // list<int> l(10); // 10 size er list create hobe
    // cout << l.size() << endl; // 10

    // list<int> l(10,3); // 10 size er list create hobe jar sob gulo value 3
    // for(auto it = l.begin(); it!=l.end(); it++){
    //     cout << *it << " ";
    // }
    // cout << endl;
    // or
    // for(int val : l){
    //     cout << val << " ";
    // }

    list<int> l = {1,2,3,4,5};
    list<int> l2(l); // 1st list er sob value 2nd list a copy hoye jabe
    for(int val : l2){
        cout << val << " ";
    }
    cout << endl;

    int a[] = {2,4,6};
    //vector<int> v = {1,3,5};
    list<int> l3(a,a+3); // list er vitor array er element store kore rakha jay
    //list<int> l3(v.begin(), v.end());
    for(int val : l3){
        cout << val << " ";
    }
    cout << endl;


    return 0;
}