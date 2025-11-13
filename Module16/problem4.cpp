#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    queue<string> q;
    while(t--){
        int val;
        cin >> val;
        if(val == 0){
            string name;
            cin >> name;
            q.push(name);
        }
        else if(val == 1){
            if(q.empty()){
                cout << "Invalid" << endl;
            }
            else{
                cout << q.front() << endl;
                q.pop();
            }
        }
    }
    return 0;
}