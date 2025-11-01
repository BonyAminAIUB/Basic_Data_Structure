#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> l = {1,2,3,4,5,6,7,8};
    //l.erase(next(l.begin(),3)); // specific position a value erase kore
    l.erase(next(l.begin(),2), next(l.begin(),5)); // multiple value erase kore
    for(int val : l){
        cout << val << " ";
    }
    cout << endl;

    list<int> l2 = {10,20,30,40,20,50,20};
    replace(l2.begin(),l2.end(),20,100); // 20 er poriborte 100 replace hoye gelo
    for(int val : l2){
        cout << val << " ";
    }
    cout << endl;
    auto it = find(l2.begin(), l2.end(),200);
    if(it == l2.end()){
        cout << "Not found" << endl;
    }
    else{
        cout << "Found" << endl;
    }
    return 0;
}