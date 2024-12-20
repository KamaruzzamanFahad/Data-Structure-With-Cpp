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

void print_Node(Node* head){
   Node* temp = head;

   while(temp != NULL){
    cout << temp->val << endl;
    temp = temp->next;
   }
}

void delete_node_head(Node* &head){
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
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

    delete_node_head(head);

    print_Node(head);

}