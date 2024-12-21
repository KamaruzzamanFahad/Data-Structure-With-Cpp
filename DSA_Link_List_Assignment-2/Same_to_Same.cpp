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

void insert(Node *&head, Node *&tail, int val)
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

void sameNode(Node* head, Node* head2){
    while(head != NULL){
        if(head->val != head2->val){
            cout << "NO";
            return;
        }
        head = head->next;
        head2 = head2->next;
    }

    cout << "YES";
}

int main()
{
        Node *head = NULL;
        Node *tail = NULL;
        int idx =0;

        while (true)
        {
            int temp;
            cin >> temp;
            if (temp == -1)
            {
                break;
            }
            insert(head, tail, temp);
            idx++;
        }

        
        Node *head2 = NULL;
        Node *tail2 = NULL;
        int idx2 =0;

        while (true)
        {
            int temp;
            cin >> temp;
            if (temp == -1)
            {
                break;
            }
            insert(head2, tail2, temp);
            idx2++;
        }

        if(idx != idx2){
            cout << "NO";
            return 0;
        }   

        sameNode(head, head2);


}