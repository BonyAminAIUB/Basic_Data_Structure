#include <bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int> pq;
    pq.push(10);
    pq.push(5);
    pq.push(20);
    cout << pq.top() << endl; // 20
    pq.push(100);
    cout << pq.top() << endl; // 100
    pq.pop(); // 100 pop hobe
    pq.pop(); // 20 pop hobe
    cout << pq.top() << endl; // 10

    priority_queue<int,vector<int>,greater<int>> pq1;  // minimum priority queue
    pq1.push(10);
    pq1.push(5);
    pq1.push(20);
    cout << pq1.top() << endl; // 5
    pq1.push(1);
    cout << pq1.top() << endl; // 1
    pq1.pop(); // 1 pop hobe
    pq1.pop(); // 5 pop hobe
    cout << pq1.top() << endl; // 10
    return 0;
}