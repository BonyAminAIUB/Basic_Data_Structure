#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
int input(Node* &head,Node* &tail){
    int max = INT_MIN;
    while(true){
        int x;
        cin >> x;
        if(x == -1){
            break;
        }
        if(max < x){
            max = x;
        }
        insert_at_tail(head,tail,x);
    }
    return max;
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    cout << input(head,tail);

    return 0;
}