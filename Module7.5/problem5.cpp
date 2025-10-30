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
void sort_list(Node* &head){
    for(Node* i = head; i != NULL; i = i->next){
        for(Node* j = i->next; j != NULL; j = j->next){
            if(i->val < j->val){
                swap(i->val,j->val);
            }
        }
    }
}
void input(Node* &head,Node* &tail){
    while(true){
        int x;
        cin >> x;
        if(x == -1){
            break;
        }
        insert_at_tail(head,tail,x);
    }
}
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    input(head,tail);
    sort_list(head);
    print(head);
    return 0;
}