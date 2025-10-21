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
void insert_at_head(Node* &head,Node* &tail,int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}
void insert_at_any_pos(Node* &head,int index,int val){
    Node* newNode = new Node(val);
    Node* temp = head;
    for(int i = 1; i<index; i++){
        temp = temp->next;
        if(temp == NULL){
            return;
        }
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
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
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << endl;
        temp = temp->next;
    }
}
// print using recursion
void print_list(Node* temp){
    if(temp == NULL){
        return;
    }
    cout << temp->val << endl;
    print_list(temp->next);
}
int main(){
    Node* head = new Node(10);
    Node* tail = new Node(50);

    head->next = tail;

    insert_at_head(head,tail,5);
    insert_at_any_pos(head,1,20);
    insert_at_tail(head,tail,30);

    print(head);
    return 0;
}