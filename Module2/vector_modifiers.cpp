#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4,5};
    vector<int> v2;
    v2 = v;
    for(int i = 0; i<v2.size(); i++){
        cout << v2[i] << " ";  // 1 2 3 4 5 
    }
    cout << endl;
    // or range based for loop
    for(int i : v2){
        cout << i << " ";   // 1 2 3 4 5
    }
    cout << endl;

    v2.push_back(6); // last a element add hoy
    for(int i = 0; i<v2.size(); i++){
        cout << v2[i] << " ";  // 1 2 3 4 5 6
    }
    cout << endl;

    v2.pop_back();  //  last a element delete kore
    for(int i = 0; i<v2.size(); i++){
        cout << v2[i] << " ";  // 1 2 3 4 5 
    }
    cout << endl;

    v2.insert(v2.begin()+2,25);  // v2.insert(position,value);
    for(int i = 0; i<v2.size(); i++){
        cout << v2[i] << " ";  // 1 2 25 3 4 5 
    }
    cout << endl;
    v2.insert(v2.begin()+6, v.begin(), v.end()); // ekta vector er sathe arekat vector add kora jay
    for(int i = 0; i<v2.size(); i++){
        cout << v2[i] << " ";  // 1 2 25 3 4 5 1 2 3 4 5 
    }
    cout << endl;

    v2.erase(v2.begin()+2); // v.erase(position ta bolte hobe)
    for(int i = 0; i<v2.size(); i++){
        cout << v2[i] << " ";  // 1 2 3 4 5 1 2 3 4 5 
    }
    cout << endl;
    v2.erase(v2.begin()+3,v2.begin()+7); // v.erase(3 number index theke delete hoye 7 er ag porjonto delete hobe)
    for(int i = 0; i<v2.size(); i++){
        cout << v2[i] << " ";  // 1 2 3 3 4 5 
    }
    cout << endl;
    return 0;
}