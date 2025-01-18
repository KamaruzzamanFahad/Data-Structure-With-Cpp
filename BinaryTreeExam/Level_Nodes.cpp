

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *LavelInput()
{
    int val;
    cin >> val;
    if (val == -1) return NULL;
    Node *root = new Node(val);
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        int Lval, Rval;
        cin >> Lval >> Rval;
        if (Lval != -1)
            temp->left = new Node(Lval);
        if (Rval != -1)
            temp->right = new Node(Rval);

        if (temp->left)
            q.push(temp->left);
        if (temp->right)
            q.push(temp->right);
    }
    return root;
}




void lavelorder(Node* root)
{
    if(root == NULL) {
        cout << "Invalid";
        return;
    }

    int x;
    cin >> x;
    if (x == 0) {
        cout << root->val; 
        return;
    }

    queue<pair<Node *, int>> q;
    q.push({root, 0});
    bool found = false;

    while (!q.empty())
    {
        Node *temp = q.front().first;
        int lavel = q.front().second;
        q.pop();

        
        if(lavel == x) {
            cout << temp->val << " ";
            found = true;
        }

        if (temp->left)
            q.push({temp->left, lavel+1});
        if (temp->right)
            q.push({temp->right, lavel+1});
        
        
    }

    if(!found) cout << "Invalid";
    return;
}




int main()
{
    Node* root = LavelInput();
    lavelorder(root);
    


}