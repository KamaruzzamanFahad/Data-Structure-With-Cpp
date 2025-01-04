
#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> url;
    list<string>::iterator CurrentItem = url.begin();

    while (true)
    {
        string temp;
        cin >> temp;

        if (temp == "end")
        {
            break;
        }
        url.push_back(temp);
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        string temp;
        cin >> temp;

        if (temp == "visit")
        {
            string adres;
            cin >> adres;
            bool flag = false;

            for (auto it = url.begin(); it != url.end(); ++it)
            {
                if (*it == adres)
                {
                    CurrentItem = it;
                    cout << *CurrentItem << endl;
                    flag = true;
                    break;
                }
            }
            if (!flag)
            {
                cout << "Not Available" << endl;
            }
        }
        else if (temp == "prev")
        {
            if (CurrentItem != url.begin())
            {
                CurrentItem--;
                cout << *CurrentItem << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (temp == "next")
        {
            if (next(CurrentItem) != url.end())
            {
                CurrentItem++;
                cout << *CurrentItem << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else
        {
            cout << "Not Available" << endl;
        }
    }
}