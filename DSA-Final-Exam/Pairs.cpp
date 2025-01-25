#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int number;

    Student(string name, int number)
    {
        this->name = name;
        this->number = number;
    }
};

class cmp
{
public:
    bool operator()(Student l, Student r)
    {
        if (l.name == r.name)
        {
            return l.number < r.number;
        }
        else
        {
            return l.name > r.name;
        }
    }
};

int main()
{
    int n;
    cin >> n;
    priority_queue<Student, vector<Student>, cmp> pq;
    while (n--)
    {
        string name;
        int number;
        cin >> name >> number;
        Student obj(name, number);
        pq.push(obj);
    }

    while (!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().number << endl;
        pq.pop();
    }
}