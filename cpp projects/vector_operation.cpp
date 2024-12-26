#include<iostream>
#include<vector>
using namespace std;

class Numberlist
{
    private:
        vector<int> numbers;
    public:
        void addNumber(int number)
        {
            numbers.push_back(number);
        }
        void removeOddNumbers()
        {
            for(int i = 0; i < numbers.size(); i++)
            {
                if(numbers[i] % 2 != 0)
                {
                    numbers.erase(numbers.begin() + i);
                    i--;
                }
            }
        }
        void display()
        {
            for(int i=0;i<numbers.size();i++)
            {
                cout<<numbers[i]<<" ";
            }
        } 
};
int main()
{
    Numberlist list;
    int size;
    cout<<"Enter the size of the list: ";
    cin>>size;
    
    vector<int> number(size);
    for(int i=0; i < size;i++)
    {
        cin >> number[i];
        list.addNumber(number[i]);
    }
    
    list.removeOddNumbers();
    cout<<"\nList after removing odd numbers: ";
    list.display();
    return 0;
}