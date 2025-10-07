// Sqrt complexity O(sqrt(N))
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 1; i<=sqrt(n); i++){
        cout << i << endl; // O(sqrt(N))
    }
    cout << endl;
    for(int i = 1; i<=sqrt(n); i++){  // or -> for(int i = 1; i*i<=n; i++)
        if(n%i == 0){
            cout << i << " " << n/i << endl; // O(sqrt(N))
        }
    }
    return 0;
}