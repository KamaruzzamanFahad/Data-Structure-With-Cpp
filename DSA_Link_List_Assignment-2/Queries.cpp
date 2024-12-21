#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insertTail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void insertHead(Node *&head, Node *&tail, int val)
{

    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void deleteNode(Node *&head, Node *&tail, int v)
{
    if (v < 0 || head == NULL)
    {
        return;
    }

    if (v == 0)
    {
        Node *temp = head;
        head = head->next;
        if (head == NULL)
            tail = NULL;
        delete temp;
        return;
    }

    Node *temp = head;
    for (int i = 1; i < v && temp->next != NULL; i++)
    {
        temp = temp->next;
    }

    if (temp->next == NULL)
    {
        return;
    }

    Node *deleteNode = temp->next;
    temp->next = deleteNode->next;
    if (deleteNode == tail)
        tail = temp;
    delete deleteNode;
}

void printNode(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int num;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            insertHead(head, tail, v);
        }
        else if (x == 1)
        {
            insertTail(head, tail, v);
        }
        else if (x == 2)
        {
            deleteNode(head, tail, v);
        }

        printNode(head);
        cout << endl;
    }
}