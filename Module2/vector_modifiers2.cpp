#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4,2,5,2};
    for(int i = 0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    // replace(v.begin(),v.end(),value,replace_value);  
    // Replace all the value with replace_value. Not under a vector.
    replace(v.begin(),v.end(),2,200);
    for(int i = 0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;

    //find(v.begin(),v.end(),v);  // Find the value V. Not under a vector.
    vector<int> :: iterator it = find(v.begin(),v.end(),5);
    // or
    //auto it = find(v.begin(),v.end(),5);
    if(it == v.end()){
        cout << "Not found" << endl;
    }
    else{
        cout << "Found" << endl;
    }
    return 0;
}