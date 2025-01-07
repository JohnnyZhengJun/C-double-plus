#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Dataprocessor
{
private:
    vector<int>data;
public:
    void adddata(int n)
    {
        data.push_back(n);
    }
    void sortdata()
    {
        sort(data.begin(),data.end());
    }
    void lsearch(int n)
    {
        bool found = 0;
        for(int i=0;i<data.size();i++)
        {
            if(data[i]==n)
            {
                cout<<"Element found at index "<<i+1 << "th place."<<endl;
                found = 1;
                break;
            }
            else{
                cout << "Not found\n";
            }
        }
    }
};
int main()
{
    Dataprocessor dp;
    dp.adddata(10);
    dp.adddata(5);
    dp.adddata(20);
    dp.adddata(15);
    dp.adddata(25);
    dp.adddata(30);
    dp.adddata(35);
    dp.adddata(40);
    dp.adddata(45);
    dp.adddata(50);
    dp.sortdata();

    dp.lsearch(50);

    return 0;
}