#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    // for(int i = 0; i<n; i++){
    //     cin >> v[i];
    // }
    // or jodi vector er size na lekha thake 
    vector<int> v1;
    for(int i = 0; i<n; i++){
        int x;
        cin >> x;
        v1.push_back(x);
    }
    for(int i = 0; i<n; i++){
        cout << v1[i] << " ";
    }
    cout << endl;
    return 0;
}