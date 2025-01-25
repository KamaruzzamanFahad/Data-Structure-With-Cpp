#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;

    priority_queue<int, vector<int>, greater<int>> pq;

    while (q--)
    {
        int n;
        cin >> n;
        pq.push(n);
    }

    int n;
    cin >> n;

    while (n--)
    {
        int x;
        cin >> x;

        if (x == 0)
        {
            int val;
            cin >> val;
            pq.push(val);
            cout << pq.top() << endl;
        }
        else if (x == 1)
        {
            if (!pq.empty())
            {
                cout << pq.top() << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (x == 2)
        {
            if (!pq.empty())
            {
                pq.pop();
                if (!pq.empty())
                {
                    cout << pq.top() << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }
    return 0;
}