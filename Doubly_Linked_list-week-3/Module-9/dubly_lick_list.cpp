#include<bits/stdc++.h>
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

void printForword(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void printBackward(Node* tail){
    Node* temp = tail;

    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

void insertHead(Node* &head, int val){
    Node* newNode = new Node(val);

    newNode->next = head;
    head->prev = newNode;
    head = newNode;

}


void insertTail(Node* &head, Node* &tail, int val){
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

int main(){
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);

    head->next = a;
    a->prev = head;
    a->next = tail;
    tail->prev = a;

    insertHead(head, 05);
    insertTail(head, tail, 40);

    printForword(head);
    printBackward(tail);
    return 0;
}