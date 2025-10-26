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
int size_of_list(Node* &head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count ++;
        temp = temp->next;
    }
    return count;
}
int main(){
    Node* head1 = NULL;
    Node* tail1 = NULL;
    input(head1,tail1);
    int sz1 = size_of_list(head1);

    Node* head2 = NULL;
    Node* tail2 = NULL;
    input(head2,tail2);
    int sz2 = size_of_list(head2);

    int flag = 0;
    while(sz1 == sz2 && (head1 != NULL || head2 != NULL)){
        if(head1->val == head2->val){
            flag = 1;
        }
        else{
            flag = 0;
            break;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    if(flag == 1){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}