#include<iostream>
using namespace std;
class Employee
{
    private:
        int id;
        string name;
        double salary;
    public:
        Employee(int id, string name, double salary)
        {
            this->id = id;
            this->name = name;
            this->salary = salary;
        }
        void display()
        {
            cout << "ID: " << id << endl;
            cout << "Name: " << name << endl;
            cout << "Salary: " << salary << endl;
        }
        static bool compareSalary(Employee e1, Employee e2)
        {
            return e1.salary > e2.salary;
        }
};
int main()
{
    Employee emp1(1, "John Doe", 5000.0);
    emp1.display();
    Employee emp2(2, "Jane Doe", 6000.0);
    emp2.display();
    if(Employee::compareSalary(emp1, emp2))
    {
        cout << "Employee 1 has higher salary than Employee 2" << endl;
    }
    else
    {
        cout << "Employee 2 has higher salary than Employee 1" << endl;
    }
    return 0;
}