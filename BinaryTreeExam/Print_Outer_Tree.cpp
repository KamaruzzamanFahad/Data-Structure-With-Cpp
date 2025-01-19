

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
    if (val == -1)
        return NULL;
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

void printLeft(Node *root)
{
    if (root == NULL)
        return;

    if (root->left)
    {
        printLeft(root->left);
        cout << root->left->val << " ";
    }
    else if (root->right)
    {
        printLeft(root->right);
        cout << root->right->val << " ";
    }
}

void printRight(Node *root)
{
    if (root == NULL)
        return;

    if (root->right)
    {
        cout << root->right->val << " ";
        printRight(root->right);
    }
    else if (root->left)
    {
        cout << root->left->val << " ";
        printRight(root->left);
    }
}

void PrintOuter(Node *root)
{
    if (root == NULL)
        return;

    if (root->left)
        printLeft(root);

    cout << root->val << " ";

    if (root->right)
        printRight(root);
}

int main()
{
    Node *root = LavelInput();
    PrintOuter(root);
}