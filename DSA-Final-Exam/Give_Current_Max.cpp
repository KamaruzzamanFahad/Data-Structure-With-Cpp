#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int mark, roll;

    Student(string name, int roll, int mark)
    {
        this->name = name;
        this->mark = mark;
        this->roll = roll;
    }
};

class cmp
{
public:
    bool operator()(Student l, Student r)
    {
        if (l.mark == r.mark)
        {
            return l.roll > r.roll;
        }
        else
        {
            return l.mark < r.mark;
        }
    }
};


int main()
{
    int q;
    cin >> q;

    priority_queue<Student, vector<Student>, cmp> pq;

    while (q--)
    {
        string name;
        int mark, rool;
        cin >> name >> rool >> mark;
        Student obj(name, rool, mark);
        pq.push(obj);
    }

    int n;
    cin >> n;

    while (n--)
    {
        int x;
        cin >> x;

        if (x == 0)
        {
            string name;
            int mark, rool;
            cin >> name >> rool >> mark;
            Student obj(name, rool, mark);
            pq.push(obj);

            cout << pq.top().name << " " << pq.top().roll << " " << pq.top().mark << endl;
        }
        else if (x == 1)
        {
            if (!pq.empty())
            {
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().mark << endl;
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
                    cout << pq.top().name << " " << pq.top().roll << " " << pq.top().mark << endl;
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