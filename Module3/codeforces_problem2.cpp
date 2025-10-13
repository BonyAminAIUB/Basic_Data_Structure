// Binary search codeforces problem
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin >> n >> t;
    int a[n];
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    sort(a,a+n);
    while(t--){
        int val;
        cin >> val;
        int flag = 0;
        int l = 0;
        int r = n-1;
        while(l<=r){
            int mid = (l + r)/2;
            if(val == a[mid]){
                flag = 1;
                break;
            }
            else if(val > a[mid]){
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }
        if(flag == 1){
            cout << "found" << endl;
        }
        else{
            cout << "not found" << endl;
        }
    }
    return 0;
}