#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> l = {1,2,3,4,5};
    list<int> l2;
    //l2 = l;
    // or
    l2.assign(l.begin(), l.end());
    for(int val : l2){
        cout << val << " ";
    }
    cout << endl;
    list<int> l3 = {2,4,6,8,10};
    l3.push_back(12); // last a value add korbe
    l3.push_front(0); // front a value add korbe
    for(int val : l3){
        cout << val << " ";
    }
    cout << endl;
    l3.pop_back(); // last er value delete kore
    l3.pop_front(); // first er value delete kore
    for(int val : l3){
        cout << val << " ";
    }
    cout << endl;
    // jekono posittion er element k access korte chaile
    cout << *next(l3.begin(),2) << endl; // 6
    // 3 number index access korte next() function use kora lagbe dereferencing kore
    l3.insert(next(l3.begin(),2),100); // 2 number index a 100 insert 
    for(int val : l3){
        cout << val << " ";
    }
    cout << endl;
    //list<int> l4 = {10,20,30};
    //l3.insert(next(l3.begin(),2),l4.begin(),l2.end()); 
    // ekti list er jekono postion a onno ekti list add kora
    return 0;
}