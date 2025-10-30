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
int size_of_list(Node* head){
    Node* temp = head;
    int sz = 0;
    while(temp != NULL){
        sz++;
        temp = temp->next;
    }
    return sz;
}
// void input(Node* &head,Node* &tail){
//     while(true){
//         int x;
//         cin >> x;
//         if(x == -1){
//             break;
//         }
//         insert_at_tail(head,tail,x);
//     }
// }
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << endl;
        temp = temp->next;
    }
}
int main(){
    Node* head1 = NULL;
    Node* tail1 = NULL;
    //input(head1,tail1);
    while(true){
        int x;
        cin >> x;
        if(x == -1){
            break;
        }
        insert_at_tail(head1,tail1,x);
    }
    int a1 = size_of_list(head1);

    Node* head2 = NULL;
    Node* tail2 = NULL;
    //input(head2,tail2);
    while(true){
        int y;
        cin >> y;
        if(y == -1){
            break;
        }
        insert_at_tail(head2,tail2,y);
    }
    int a2 = size_of_list(head2);
    if(a1 == a2){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}