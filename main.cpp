#include <iostream>
#include <vector>
using namespace std;


template <typename T>
class Stack
{
public:
    vector<T> v;
    T Empty()
    {
        return v.empty();
    }
    T Push(const T&item)
    {
        v.push_back(item);
    }
    T top()
    {
       return v.back();
    }
    T pop()
    {
        v.pop_back();
    }
};



int main()
{
    Stack <int>ob;
    if(ob.Empty()==1)
        cout<<"stiva e goala";
    ob.Push(3);
    ob.Push(4);
    cout<<endl;
    cout<<ob.top();
    ob.pop();
    cout<<endl;
    cout<<ob.top();
    return 0;
}
