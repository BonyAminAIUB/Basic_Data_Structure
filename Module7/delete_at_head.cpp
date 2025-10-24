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
void insert_at_tail(Node* &head,Node* &tail,int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
// print reverse using recursion
// void print_reverse(Node* temp){
//     if(temp == NULL){
//         return;
//     }
//     print_reverse(temp->next);
//     cout << temp->val << endl;
// }

// print using recursion
void print(Node* temp){
    if(temp == NULL){
        return;
    }
    cout << temp->val << endl;
    print(temp->next);
}
void delete_at_head(Node* &head){
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while(true){
        cin >> val;
        if(val == -1){
            break;
        }
        insert_at_tail(head,tail,val);
    }
    delete_at_head(head);
    print(head);
    return 0;
}