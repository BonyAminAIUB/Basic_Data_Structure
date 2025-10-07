// Linear complexity always O(n)
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; // O(1)
    cin >> n; // O(1)
    for(int i = 1; i<=n; i+=2){
        cout << i << " "; // O(n/2) ie O(n)
    }
    cout << endl; // O(1)
    for(int i = 1; i<=n; i++){
        cout << i << " "; // O(n)
    }
    return 0; // O(1)
}
// Overall time complexity hobe highest ta ie, O(n)