#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

template <class T>
class Stack
{
public:
    int size() const;
    bool Empty() const;
    const T& top() const
    {
        if (Empty())
            printf("Stiva este goala\n");
        return a.back();
    }
    void push(const T& ob);
    void pop();
    vector <T> a;
};

//add add
//add

template <class T> bool Stack<T>::Empty() const
{
    return (a.empty());
}

template <class T> void Stack<T>::push(const T& ob)
{
    a.push_back(ob);
}

template <class T> void Stack<T>::pop()
{
    if (Empty())
        cout<<"Stiva este goala\n";
    a.pop_back();
}

int main()
{
    Stack <int> obj_int;
    int v[10];
    int nr;
    cout<<"Elemente in vectorul de intregi(max 9): "; cin>>nr;
    for (int i = 1; i <= nr; i++)
    {
        printf("Elementul %d: ", i);
        cin>>v[i];
        obj_int.push(v[i]);
    }
    while (!obj_int.Empty())
    {
        cout << obj_int.top() << "\n";
        obj_int.pop();
    }
    cout << endl;

    Stack <char> obj_char;
    char s[10];
    cout<<"Elemente in vectorul de char(max 9): ";cin>>nr;
    for (int k = 1; k <= nr; k++)
    {
        printf("Litera %d: ", k);
        cin>>s[k];
        obj_char.push(s[k]);
    }
    while (!obj_char.Empty())
    {
        cout << obj_char.top() << "\n";
        obj_char.pop();
    }

    return 0;
}
