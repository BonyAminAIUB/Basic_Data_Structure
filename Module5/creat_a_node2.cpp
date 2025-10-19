// Using constructor
#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* next;
    Node(int val){
        this->val = val;
    }
};
int main(){
    Node a(10),b(15),c(20);

    a.next = &b;
    b.next = &c;

    cout << a.val << endl; // 10
    cout << a.next->val << endl; // 15
    cout << a.next->next->val << endl; // 20
    return 0;
}