#include <bits/stdc++.h>
using namespace std;
class myStack{
    public:
        vector<int> v;

        void push(int val){
            v.push_back(val);
        }
        void pop(){
            v.pop_back();
        }
        int top(){
            return v.back();
        }
        int size(){
            return v.size();
        }
        bool empty(){
            return v.empty();
        }
};
int main(){
    myStack st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout << st.top() << endl; // 30
    st.pop();
    cout << st.top() << endl; // 20
    st.pop();
    cout << st.top() << endl; // 10
    st.pop();
    if(st.empty() == false){
        cout << st.top() << endl; 
    }
    //if(!st.empty()) // same as line 34
    return 0;
}