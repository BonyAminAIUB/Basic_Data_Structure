#include <bits/stdc++.h>
using namespace std;

int main(){
    pair<string, int> p;
    //p = make_pair("Bony",7); // pair er vitor 2 ta value store kore rakhe
    p = {"Hello", 1}; // same as make_pair() function
    cout << p.first << " " << p.second << endl; // pair er value print er jonno
    
    int n;
    cin >> n;
    vector<pair<int,int>> v(n);
    for(int i = 0; i<n; i++){
        cin >> v[i].first >> v[i].second;
    }
    for(int i = 0; i<n; i++){
        cout << v[i].first << " " << v[i].second << endl;
    }
    return 0;
}