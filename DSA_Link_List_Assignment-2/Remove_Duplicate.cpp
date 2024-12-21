#include<bits/stdc++.h>
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

void insert(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void printNode(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
}


void removeDuplicate(Node* &head){
    Node* i = head;
    while(i != NULL){
        Node* j = i;
        while(j->next != NULL){

            if(i->val == j->next->val){
            Node* deleteNode = j->next;
            j->next = j->next->next;
            delete deleteNode;
        }else{
            j = j->next;
        }
        }
        i= i->next;
    }
}



int main(){
    Node* head = NULL;
    Node* tail = NULL;

    while(true){
        int temp;
        cin >> temp;

        if(temp == -1){
            break;
        }
        insert(head, tail, temp);
    }
    removeDuplicate(head);
    printNode(head);
}