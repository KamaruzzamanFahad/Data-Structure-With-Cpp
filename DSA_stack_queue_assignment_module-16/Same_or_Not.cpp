#include<bits/stdc++.h>
using namespace std;

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