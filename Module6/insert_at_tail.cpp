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
// void insert_at_head(Node* &head,Node* &tail,int val){
//     Node* newNode = new Node(val);
//     if(head == NULL){
//         head = newNode;
//         tail = newNode;
//         return;
//     }
//     newNode->next = head;
//     head = newNode;
// }
void insert_at_tail(Node* &head,int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << endl;
        temp = temp->next;
    }
}
int main(){
    Node* head = new Node(10);
    
    //insert_at_head(head,tail,100);
    insert_at_tail(head,50);
    insert_at_tail(head,60);
    insert_at_tail(head,70);

    print(head);

    return 0;
}