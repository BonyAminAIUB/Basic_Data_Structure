// Quadratic complexity O(N_N)
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 1; i<=n; i++){ // O(N)
        for(int j = 1; j<=n; j++){
            cout << "Hello" << endl; // O(N) overall -> O(N_N)
        }   
    }
    cout << endl;
    // for(int i = 1; i<=n; i++){ // O(N)
    //     for(int j = 1; j<=m; j++){ // O(M)
    //         cout << "Hello" << endl; // overall -> O(N*M)
    //     }   
    // }
    return 0;
}