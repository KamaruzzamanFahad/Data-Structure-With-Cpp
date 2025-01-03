#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next =NULL;
    }
};


void insert_at_head(Node* &head, int val){
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insert_at_tail(Node* &tail, int val){
    Node* newNode = new Node(val);
    tail->next = newNode;
    tail = newNode;
}

void insert_at_any(Node* &head, int idx, int val){
    Node* newNode = new Node(val);

    Node* temp = head;
    for(int i=1; i<idx; i++){
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void print_Node(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << endl;
        temp = temp->next;
    }
}

int main(){
    Node* head = new Node(10);
    Node* tail = new Node(20);

    head->next = tail;

    insert_at_head(head, 5);

    

    insert_at_any(head, 2, 100);

    insert_at_tail(tail, 40);
    insert_at_tail(tail, 50);


    print_Node(head);


}