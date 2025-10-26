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
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    int max_val = INT_MIN;
    int min_val = INT_MAX;
    while(true){
        cin >> val;
        if(val == -1){
            break;
        }
        else{
            if(max_val < val){
                max_val = val;
            }
            if(min_val > val){
                min_val = val;
            }
        }
        insert_at_tail(head,tail,val);
    }
    int dif = max_val - min_val;
    cout << dif << endl;
    return 0;
}