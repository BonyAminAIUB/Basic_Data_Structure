#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> l = {1,2,3,4,5};
    //l.clear(); // sob element clear kore dey
    cout << l.size() << endl; // size print korbe
    cout << l.empty() << endl; // true or false return korbe
    l.resize(7); // notun kore 7 size hoye jabe ar bali element gulo 0 hoye jabe
    for(int val : l){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}