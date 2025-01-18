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


int totalNode =0;
int sumWithoutLeaf(Node *root)
{
    if (root == NULL)
        return 0;
    totalNode++;
    int l = sumWithoutLeaf(root->left);
    int r = sumWithoutLeaf(root->right);

    return max(l, r) +1;
}


int main()
{
    Node* root = LavelInput();
    int lavel = sumWithoutLeaf(root);
    if( pow(2, lavel)-1 == totalNode) cout << "YES"; else cout<< "NO";


}