#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;

    queue<string> que;
    for (int i = 0; i < q; i++)
    {
        int n;

        cin >> n;

        if (n == 0)
        {
            string s;
            cin >> s;
            que.push(s);
        }
        else
        {
            if (!que.empty())
            {
                cout << que.front() << endl;
                que.pop();
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
    }
}