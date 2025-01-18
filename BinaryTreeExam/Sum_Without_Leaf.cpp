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
int sum =0;

void sumWithoutLeaf(Node *root)
{
    if (root == NULL)
        return;
    
    if(root->left != NULL || root->right != NULL) sum = sum + root->val;
    sumWithoutLeaf(root->left);
    sumWithoutLeaf(root->right);
}

int main()
{
    Node* root = LavelInput();
    sumWithoutLeaf(root);
    cout << sum;
}