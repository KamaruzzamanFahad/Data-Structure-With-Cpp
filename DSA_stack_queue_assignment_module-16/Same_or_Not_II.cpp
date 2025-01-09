#include<bits/stdc++.h>
using namespace std;


class Node{
    public:

    int val;
    Node* next;
    Node* prev;

    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};



class st{

    public:
    Node* head = NULL;
    Node* tail = NULL;

    void push(int val){
        Node* newNode = new Node(val)
        
    }
    void pop(){

    }

    int size(){

    }

    bool empty(){

    }

    int top(){

    }

};


int main(){
    stack<int> st;
    queue<int> qu;

    int n,m;
    cin >> n >> m;
    if(n != m){
        cout << "NO";
        return 0;
    }

    for(int i=0; i<n; i++){
        int val;
        cin >> val;
        st.push(val);
    }

     for(int i=0; i<m; i++){
        int val;
        cin >> val;
        qu.push(val);
    }

    bool flag = true;
    while(!st.empty()){
        if(st.top() != qu.front()){
            flag = false;
            break;
        }
        st.pop();
        qu.pop();
    }
    
    flag ? cout << "YES" : cout << "NO";
    return 0;
}