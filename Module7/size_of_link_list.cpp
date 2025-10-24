#include <bits/stdc++.h>
using namespace std;
int sz = 0;
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
    sz ++;
}
void insert_at_any_pos(Node* &head,int index,int val){
    Node* newNode = new Node(val);
    sz ++;
    Node* temp = head;
    for(int i = 1; i<index; i++){
        temp = head->next;
        if(temp == NULL){
            return;
        }
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
void insert_at_tail(Node* &head,Node* &tail,int val){
    Node* newNode = new Node(val);
    sz ++;
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
int size_of_list(Node* &head){
    // Node* temp = head;
    // int count = 0;
    // while(temp != NULL){
    //     count ++;
    //     temp = temp->next;
    // }
    // return count;
    return sz;
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
    print(head);
    int s = size_of_list(head);
    cout << s << endl;
    return 0;
}