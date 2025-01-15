#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    int val;
    Node* left;
    Node* rigt;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->rigt = NULL;
    }
};


void lavelorder(Node* root){
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* front = q.front();
        q.pop();

        cout << front->val << " ";

        if(front->left)
            q.push(front->left);
        if(front->rigt)
            q.push(front->rigt);
    }
}

int main(){
    Node* root = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);

    root->left = a;
    root->rigt = b;
    a->left = c;
    b->left = d;
    b->rigt = e;

    lavelorder(root);
}