#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    stack<int> st;
    queue<int> q;
    for(int i = 0; i<n; i++){
        int val1;
        cin >> val1;
        st.push(val1);
    }
    for(int i = 0; i<m; i++){
        int val2;
        cin >> val2;
        q.push(val2);
    }
    int flag = 0;
    if(n == m){
        for(int i = 0; i<n; i++){
            if(st.top() == q.front()){
                flag = 1;
                st.pop();
                q.pop();
            }
            else{
                flag = 0;
                break;
            }
        }
        if(flag == 1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}