#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    cin.ignore();

    for (int i = 0; i < q; i++)
    {
        string s;
        getline(cin, s);

        stack<char> st;
        for (char c : s)
        {
            if (!st.empty() && (c == '1' && st.top() == '0'))
            {
                st.pop();
            }
            else
            {
                st.push(c);
            }
        }
        if (st.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}