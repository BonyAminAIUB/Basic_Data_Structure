// Logarithmic complexity O(log N)
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; // O(1)
    cin >> n; // O(1)
    for(int i = 1; i<=n; i*=2){
        cout << i << endl; // O(log N)
    }
    cout << endl;
    for(int i = n; i>=1; i/=3){
        cout << i << endl; // O(log N)
    }
    cout << endl;
    int k = 2;
    for(int i = 1; i<n; i++){
        cout << i << endl; // O(log N)
        i = i*k;
    }
    return 0;
}
// log k (n) -> k means base and n means koto porjonto loop cholbe