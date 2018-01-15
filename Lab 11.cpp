
#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;
//Aceasta este o schimbare
//Aceasta este o noua schimbare
template <typename T>
class Stack
{
public:
    int size() const;
    bool isEmpty() const;
    const T& top() const
    {
        if (isEmpty())
            printf("Stiva este goala\n");
        return a.back();
    }
    void push(const T& ob);
    void pop();
    vector <T> a;
};

template <typename T> bool Stack<T>::isEmpty() const
{
    return (a.empty());
}

template <typename T> void Stack<T>::push(const T& ob)
{
    a.push_back(ob);
}

template <typename T> void Stack<T>::pop()
{
    if (isEmpty())
        cout<<"Stiva este goala\n";
    a.pop_back();
}

int main()
{
    Stack <int> obj_int;
    int v[10];
    for (int i = 1; i <= 7; i++)
    {
        printf("Elementul %d: ", i);
        cin>>v[i];
        obj_int.push(v[i]);
    }
    while (!obj_int.isEmpty())
    {
        cout << obj_int.top() << "\n";
        obj_int.pop();
    }
    cout << endl;

    Stack <char> obj_char;
    char s[10];
    for (int k = 1; k <= 5; k++)
    {
        printf("Litera %d: ", k);
        cin>>s[k];
        obj_char.push(s[k]);
    }
    while (!obj_char.isEmpty())
    {
        cout << obj_char.top() << "\n";
        obj_char.pop();
    }

    return 0;
}
