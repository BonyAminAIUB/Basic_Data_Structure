// Linearithmic complexity O(N log N)
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 1; i<=n; i++){ // O(N)
        for(int j = 1; j<=n; j*=2){ // O(log N)
            cout << "Hello" << endl; // overall -> O(N log N)
        }   
    }
    return 0;
}