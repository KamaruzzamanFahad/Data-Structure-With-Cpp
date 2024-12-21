#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
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
        cout << temp->val << endl;
        temp = temp->next;
    }
}

int maxNode(Node* head){
    int mx = INT_MIN;
    Node* temp = head;

    while(temp != NULL){
        mx = max(mx, temp->val);
        temp = temp->next;
    }
    return mx;
}

int minNode(Node* head){
    int mn = INT_MAX;
    Node* temp = head;

    while(temp != NULL){
        mn = min(mn, temp->val);
        temp = temp->next;
    }
    return mn;
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

    int result = abs(maxNode(head) - minNode(head));
    
    cout << result;
}