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

class st
{

public:
    Node *head = NULL;
    Node *tail = NULL;
    int siz = 0;

    void push(int val)
    {
        Node *newNode = new Node(val);
        siz++;

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    void pop()
    {
        siz--;
        if (head != NULL)
        {
            Node *deleteNode = tail;
            tail = tail->prev;
            delete deleteNode;
            if (tail == NULL)
            {
                head = NULL;
                tail = NULL;
                return;
            }
            tail->next = NULL;
        }
    }

    int size()
    {
        return siz;
    }

    bool empty()
    {
        return head == NULL;
    }

    int top()
    {
        return tail->val;
    }
};



class que
{

public:
    Node *head = NULL;
    Node *tail = NULL;
    int siz = 0;

    void push(int val)
    {
        Node *newNode = new Node(val);
        siz++;

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void pop()
    {
        siz--;
        if (head != NULL)
        {
            Node *deleteNode = head;
            head = head->next;
            delete deleteNode;
            if (head == NULL)
            {
                tail = NULL;
                return;
            }
           
        }
    }

    int size()
    {
        return siz;
    }

    bool empty()
    {
        return head == NULL;
    }

    int front()
    {
        return head->val;
    }
};

int main()
{
    st st;
    que qu;

    int n, m;
    cin >> n >> m;
    if (n != m)
    {
        cout << "NO";
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }

    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        qu.push(val);
    }

    bool flag = true;
    while (!st.empty())
    {
        if (st.top() != qu.front())
        {
            flag = false;
            break;
        }
        st.pop();
        qu.pop();
    }

    flag ? cout << "YES" : cout << "NO";
    return 0;
}