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

void printNode(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}


int searchNode(Node* head, int searchVal, int idx){
    Node* temp = head;
    
    for(int i=0; i<idx; i++){
        if(searchVal == temp->val){
            return i;
        }
        temp = temp->next;
    }
    return -1;
}


int main()
{

    int num;
    cin >> num;
    for (int i = 0; i < num; i++)
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
        int searchVal;
        cin >> searchVal;

        cout << searchNode(head, searchVal, idx) << endl;
    }

}