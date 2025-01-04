
#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> abc;

    while (true)
    {
        int temp;
        cin >> temp;

        if (temp == -1)
        {
            break;
        }
        abc.push_back(temp);
    }

    abc.sort();
    abc.unique();

    for (int val : abc)
    {
        cout << val << " ";
    }

    
}