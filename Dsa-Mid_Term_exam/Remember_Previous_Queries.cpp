#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList;

    int num;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            myList.push_front(v);
        }
        else if (x == 1)
        {
            myList.push_back(v);
        }
        else if (x == 2)
        {
            if (v >= 0 && v < myList.size())
            {
                myList.erase(next(myList.begin(), v));
            }
        }

        cout << "L -> ";
        for (int &val : myList)
        {
            cout << val << " ";
        }
        cout << endl;

        list<int> revList = myList;
        revList.reverse();

        cout << "R -> ";
        for (int val : revList)
        {
            cout << val << " ";
        }
        cout << endl;
    }
}
