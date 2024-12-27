#include<iostream>
#include<stack>
using namespace std;
class Stackop
{
private:
    stack<int> data;
public:
    void push(int n)
    {
        data.push(n);
    }
    void pop()
    {
        data.pop();
    }
    void displayStack()
    {
        stack<int> temp=data;
        while(!temp.empty())
        {
            cout<<temp.top()<<" ";
            temp.pop();
        }
    }
};
int main()
{
    Stackop s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);

    s1.pop();
    s1.pop();

    s1.displayStack();
    cout<<endl;
    return 0;
}