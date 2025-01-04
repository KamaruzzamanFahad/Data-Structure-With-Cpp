#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert(int val, Node *&head, Node *&tail)
{
    Node *NewNode = new Node(val);

    if (head == NULL)
    {
        head = NewNode;
        tail = NewNode;
        return;
    }

    tail->next = NewNode;
    NewNode->prev = tail;
    tail = NewNode;
};

void palindrom(Node *&head, Node *&tail)
{
    int idx = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        idx++;
        temp = temp->next;
    }
    for (int i = 0; i < idx / 2; i++)
    {
        if (head->val != tail->val)
        {
            cout << "NO";
            return;
        }

        head = head->next;
        tail = tail->prev;
    }
    cout << "YES";
    return;
};

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int temp;
        cin >> temp;

        if (temp == -1)
        {
            break;
        }
        insert(temp, head, tail);
    }

    palindrom(head, tail);
}
