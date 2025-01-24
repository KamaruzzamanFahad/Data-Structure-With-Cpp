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

Node* insertTree(){
    int value;
    cin >> value;
    Node* root;
    if (value == -1){
        root = NULL;
        return root;
    }
  root = new Node(value);
  queue<Node*> q;
  q.push(root);

  while(!q.empty()){
    Node* front = q.front();
    q.pop();

    int l, r;
    cin>> l >> r;

    if(l != -1) front->left = new Node(l);
    if(r != -1) front->right = new Node(r);

    if(front->left) q.push(front->left);
    if(front->right) q.push(front->right);
  }
return root;
}

void PrintLavelOrder(Node* root){
    if(root == NULL) return;

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        cout << temp->val << " ";

        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);
    }
}

void insert(Node* &root, int val){
    if(root == NULL) root = new Node(val);

    if(val < root->val){
        if(root->left == NULL){
            root->left = new Node(val);
        }else{
            insert(root->left, val);
        }
    }else{
        if(root->right == NULL)
            root->right = new Node(val);
        else
            insert(root->right, val);
    }
}

int main(){
    Node* root = insertTree();
    int val;
    cin >> val;
    insert(root, val);
    PrintLavelOrder(root);
}