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


Node* inputLavelOrder(){
    int val;
    cin >> val;
    if(val == -1){
        return NULL;
    }

    Node* root = new Node(val);
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        if(l == -1) temp->left = NULL;
        else temp->left = new Node(l);
        if(r ==-1) temp->right = NULL;
        else temp->right = new Node(r);

        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);
    }
    return root;
}

int main(){

}