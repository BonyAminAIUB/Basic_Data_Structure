#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> l = {1,2,3,1,4,5,1,6,7};
    //l.remove(1); // jekhane jekhane 1 pabe sob remove kore dibe
    l.sort(); // puro list take sort kore dibe
    l.unique(); // only unique value gulo rakhbe tobe shorto holo list ta sorted thakte hobe
    for(int val : l){
        cout << val << " ";
    }
    cout << endl;

    l.sort(greater<int>()); // decreasing order a sort korbe
    for(int val : l){
        cout << val << " ";
    }
    cout << endl;

    list<int> l2 = {1,2,3,1,4,5,1,6,7};
    l2.reverse(); // ulto print kore dibe
     for(int val : l2){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}