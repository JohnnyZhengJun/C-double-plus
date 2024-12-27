#include<iostream>
#include<vector>
using namespace std;
class Student
{
private:
    vector<int> marks;
public:
    int cases = 1;
    Student() : marks(5) {} 
    //Constructor to initialize marks vector with size 5

    void setMarks()
    {
        for(int i=0;i<5;i++)
        {
            cout<<"Enter marks of subject "<<i+1<<": ";
            cin>>marks[i];
        }
    }
    void calculateAvg()
    {
        int sum=0;
        for(int i=0;i<5;i++)
        {
            sum+=marks[i];
        }
        cout<<"Average marks: "<<sum/5<<endl;
    }
    void displayMarks()
    {
        for(int i=0;i<5;i++)
        {
            cout <<"Subject "<<i+1<<" marks: "<<marks[i]<<endl;
        }
    }
};
int main()
{
    Student s1;
    s1.setMarks();
    s1.displayMarks();
    s1.calculateAvg();

    return 0;
}