#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    cout << v.size() << endl; // 0

    vector<int> v1(5);
    cout << v1.size() << endl; // 5

    vector<int> v2(5,1);
    for(int i = 0; i<v2.size(); i++){
        cout << v2[i] << " "; // 1 1 1 1 1
    }
    cout << endl;

    // vector copy to another vector
    vector<int> v3(v2);
    for(int i = 0; i<v3.size(); i++){
        cout << v3[i] << " "; // 1 1 1 1 1
    }
    cout << endl;

    // array to vector conversion
    int a[5] = {1,2,3,4,5};
    vector<int> v4(a,a+5);
    for(int i = 0; i<v4.size(); i++){
        cout << v4[i] << " "; // 1 2 3 4 5
    }
    cout << endl;

    // vector declaretion and initialization
    vector<int> v5 = {1,2,3,4,5};
    for(int i = 0; i<v5.size(); i++){
        cout << v5[i] << " "; // 1 2 3 4 5
    }
    cout << endl;
    return 0;
}