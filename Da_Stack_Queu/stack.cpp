#include<bits/stdc++.h>
using namespace std;

class MyStack
{
public:
    vector<int> v;

    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        if (!v.empty())
        {
            v.pop_back();
        }
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        return v.empty();
    }
};

int main()
{
    MyStack st;

    while(true){
        int temp ;
       cin >> temp;
       if(temp == -1){
        break;
       }
       st.push(temp);
    }

    while(!st.empty()){
        cout << st.top() << endl;
        st.pop();
    }
}