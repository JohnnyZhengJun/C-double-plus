#include<iostream>
#include<queue>
using namespace std;
class Queueop
{
private:
    queue<int> q;
public:
    void enqueue(int n)
    {
        q.push(n);
    }
    void dequeue()
    {
        q.pop();
    }
    void displayq()
    {
        queue<int>temp=q;
        while(!temp.empty())
        {
            cout<<temp.front()<<" ";
            temp.pop();
        }
    }    
};
int main()
{
    Queueop q1;
    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.enqueue(40);
    q1.enqueue(50);

    q1.dequeue();
    q1.dequeue();

    q1.displayq();
    return 0;
}