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
void delete_at_head(Node* &head){
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
}
void delete_at_tail(Node* &head, Node* &tail, int index){
    Node* temp = head;
    for(int i = 1; i<index; i++){
        temp = temp->next;
    }
    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
    tail = temp;
}
void delete_at_any_pos(Node* &head, int index){
    Node* temp = head;
    for(int i = 1; i<index; i++){
        temp = temp->next;
    }
    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
int size_list(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count ++;
        temp = temp->next;
    }
    return count;
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int t;
    cin >> t;
    while(t--){
        int x,val;
        cin >> x >> val;
        if(x == 1){
            insert_at_tail(head,tail,val);
            print(head);
        }
        else if(x == 0){
            insert_at_head(head,tail,val);
            print(head);
        }
        else if(x == 2){
            int sz = size_list(head);
            if(val == 0){
                delete_at_head(head);
                print(head);
            }
            else if(val == sz-1){
                delete_at_tail(head,tail,val);
                print(head);
            }
            else if(val < 0 || val > sz-1){
                print(head);
            } 
            else{
                delete_at_any_pos(head,val);
                print(head);
            }
        }
    }
    return 0;
}