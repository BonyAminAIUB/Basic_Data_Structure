#include <bits/stdc++.h>
using namespace std;
int main(){
    // set ekdom unique value dey + sort kore dey
    set<int> s;
    int n;
    cin >> n;
    while(n--){
        int val;
        cin >> val;
        s.insert(val);   // O(log n)
    }
    for(auto it = s.begin(); it!=s.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    if(s.count(4))  // O(log n)
        cout << "Ache" << endl;
    else
        cout << "Nai" << endl;
    return 0;
}