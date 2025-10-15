// Sorted
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i<n; i++){
            cin >> a[i];
        }
        vector<int> v(n);
        v = a;
        sort(a.begin(),a.end());
        if(a == v){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}