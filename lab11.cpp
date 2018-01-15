fsdafsdafsad
template <typename T>
class Stack
{
public:
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

int main()
{
    Stack <int> b_int;
    int a[10];
    for (int i = 1; i <= 4; i++)
    {
        printf("Elementul %d: ", i);
        cin>>a[i];
        b_int.push(a[i]);
    }
    while (!b_int.empty())
    {
        cout << b_int.top() << "\n";
        b_int.pop();
    }
    cout << endl;

    Stack <char> b_char;
    char c[10];
    for (int i = 1; i <= 4; i++)
    {
        printf("Litera %d: ", i);
        cin>>c[i];
        b_char.push(c[i]);
    }
    while (!b_char.empty())
    {
        cout << b_char.top() << "\n";
        b_char.pop();
    }

    return 0;
}
