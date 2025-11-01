#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> l = {1,2,5,3,1,6,0};
    cout << l.back() << endl; // 0
    cout << l.front() << endl; // 1
    cout << *l.begin() << endl; // 0 same as line 7
    cout << *next(l.begin(),2) << endl; // 5 any position er jonno
    return 0;
}