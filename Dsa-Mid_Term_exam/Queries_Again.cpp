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

void insert(int val, Node *&head, Node *&tail, int idx)
{
    Node *newNode = new Node(val);

    if (idx == 0)
    {
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        return;
    }

    Node *temp = head;
    int count = 0;
    while (temp != NULL && count < idx - 1)
    {
        temp = temp->next;
        count++;
    }

    if (temp == NULL)
    {
        cout << "Invalid" << endl;
        delete newNode;
        return;
    }

    if (temp->next == NULL)
    {
        temp->next = newNode;
        newNode->prev = temp;
        tail = newNode;
    }
    else
    {
        newNode->next = temp->next;
        temp->next->prev = newNode;
        temp->next = newNode;
        newNode->prev = temp;
    }
};

void PrintForward(Node *head)
{
    cout << "L -> ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void PrintBackword(Node *tail)
{
    cout << "R -> ";
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int num;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        int idx, val;
        cin >> idx >> val;

        Node *temp = head;
        int index = 0;
        while (temp != NULL)
        {
            temp = temp->next;
            index++;
        }

        if (idx < 0 || idx > index)
        {
            cout << "Invalid" << endl;
        }
        else
        {
            insert(val, head, tail, idx);
            PrintForward(head);
            PrintBackword(tail);
        }
    }
}
