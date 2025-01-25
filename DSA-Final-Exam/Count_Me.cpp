#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    while (n--)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string word;
        map<string, int> mp;

        string maxstring = "";
        int mx = 0;

        while (ss >> word)
        {
            mp[word]++;

            if (maxstring.length() < 1)
            {
                maxstring = word;
                mx = 1;
                
            }

            if (mp[word] > mx)
            {
                mx = mp[word];
                maxstring = word;
            }
            
        }
        cout << maxstring << " " << mx << endl;
    }
}
