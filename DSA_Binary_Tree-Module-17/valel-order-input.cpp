#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* left;
    Node* right;

    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }

};


Node* input(){
    int rootval;
    cin >> rootval;
    Node* root = NULL;
    if(rootval == -1) return root;
    root = new Node(rootval);
    queue<Node*> q;
    q.push(root);


    while(!q.empty()){
        int vall, valr;
        cin >> vall >> valr;

        Node* p = q.front();
        q.pop();

        if(vall != -1) p->left  = new Node(vall);
        else p->left = NULL;
        if(valr != -1)  p->right = new Node(valr);
        else  p->right = NULL;

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }

    return root;

}



void lavelorder(Node* root){
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* front = q.front();
        q.pop();

        cout << front->val << " ";

        if(front->left)
            q.push(front->left);
        if(front->right)
            q.push(front->right);
    }
}



int main(){
    Node* root = input();
    lavelorder(root);
}