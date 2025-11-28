// eita te TLE ashche
#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
        string name;
        int val;
        Student(string name, int val){
            this->name = name;
            this->val = val;
        }
};
class cmp{
    public:
        bool operator()(Student l, Student r){
            if(l.name == r.name){
                return l.val < r.val;
            } 
            else{
                return l.name > r.name;
            }           
        }
};
int main(){
    priority_queue<Student,vector<Student>,cmp> pq;
    int n;
    cin >> n;
    for(int i = 0; i<n; i++){
        string name;
        int val;
        cin >> name >> val;
        Student obj(name,val);
        pq.push(obj);
    }
    while(!pq.empty()){
        cout << pq.top().name << " " << pq.top().val << endl;
        pq.pop();
    }
    return 0;
}