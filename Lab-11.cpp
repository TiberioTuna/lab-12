#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

template <typename T>
class Stack
{
public:
//    int size() const;
    bool empty() const
    {
        return (a.empty());
    }
    void push(const T& ob)
    {
        a.push_back(ob);
    }
    const T& top() const
    {
        if (a.empty())
            printf("Stiva goala\n");
        return a.back();
    }
    void pop()
    {
        if (a.empty())
            cout<<"Stiva goala\n";
        a.pop_back();
    }

    vector <T> a;
};
//SCHIMBARE INTR-un branch nou
int main()
{
    Stack <int> s_int;
    int v[10];
    for (int i = 1; i <= 4; i++)
    {
        printf("Elementul %d: ", i);
        cin>>v[i];
        s_int.push(v[i]);
    }
    while (!s_int.empty())
    {
        cout << s_int.top() << "\n";
        s_int.pop();
    }
    cout << endl;

    Stack <char> s_char;
    char c[10];
    for (int i = 1; i <= 4; i++)
    {
        printf("Litera %d: ", i);
        cin>>c[i];
        s_char.push(c[i]);
    }
    while (!s_char.empty())
    {
        cout << s_char.top() << "\n";
        s_char.pop();
    }

    return 0;
}
