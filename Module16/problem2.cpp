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
class myStack{
    public:
        Node* head = NULL;
        Node* tail = NULL;

        void push(int val){
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
        void pop(){
            Node* deleteNode = tail;
            tail = tail->prev;
            delete deleteNode;
            if(tail == NULL){
                head = NULL;
                return;
            }
            tail->next = NULL;
        }
        int top(){
            return tail->val;
        }
};
class myQueue{
    public:
    Node* head = NULL;
    Node* tail = NULL;

    void push(int val){
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
    void pop(){
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        if(head == NULL){
            tail = NULL;
            return;
        }
        head->prev = NULL;
    }
    int front(){
        return head->val;
    }
};
int main(){
    myStack st;
    myQueue q;
    int n,m;
    cin >> n >> m;
    for(int i = 0; i<n; i++){
        int val1;
        cin >> val1;
        st.push(val1);
    }
    for(int i = 0; i<m; i++){
        int val2;
        cin >> val2;
        q.push(val2);
    }
    int flag = 0;
    if(n == m){
        for(int i = 0; i<n; i++){
            if(st.top() == q.front()){
                flag = 1;
                st.pop();
                q.pop();
            }
            else{
                flag = 0;
                break;
            }
        }
        if(flag == 1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}