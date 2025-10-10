#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4,5};
    for(int i = 0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    cout << v[3] << endl;  // Access the ith element.
    cout << v.back() << endl;  // Access the last element.
    // or 
    // cout << v[v.size()-1] << endl;
    cout << v.front() << endl;  // Access the first element.
    // or
    //cout << v[0] << endl;
    return 0;
}