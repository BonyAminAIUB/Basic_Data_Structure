#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* next;
        Node* prev;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
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
    newNode->prev = tail;
    tail = newNode;
}
void reverse_doubly(Node* head, Node* tail){
    for(Node *i = head, *j = tail; i!=j && i->prev!=j; i=i->next, j=j->prev){
        swap(i->val,j->val);
    }
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
    Node* temp_head = NULL;
    Node* temp_tail = NULL;
    Node* temp = head;
    while(temp != NULL){
        insert_at_tail(temp_head,temp_tail,temp->val);
        temp = temp->next;
    }
    reverse_doubly(head,tail);

    Node* tmp1 = temp_head;
    Node* tmp2 = head;
    int flag = 1;
    while(tmp1 != NULL && tmp2 != NULL){
        if(tmp1->val != tmp2->val){
            flag = 0;
            break;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }
    if(flag == 1){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}