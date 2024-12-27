#include<iostream>
#include<ctype.h>
using namespace std;
class book
{
private:
    string title;
    string author;
    bool isAvailable;
public:
    book(string tit, string auth, bool isAv)
    {
        this -> title = tit;
        this -> author = auth;
        this -> isAvailable = isAv;
    }
    void borrowbook()
    {
        if(isAvailable)
        {
            cout<<"Book borrowed successfully."<<endl;
            isAvailable = false;
            cout << "Need to return book after 1 month.\n";
        }
    }
    void returnbook()
    {
        cout << "Book returned successfully.\n";
        isAvailable = true;
    }
    void display()
    {
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        if(isAvailable == true)
        {
            cout << title << " is available.\n";
        }
        else{
            cout << title << " is not available.\n";
        }
    }
};
int main()
{
    book b1("Harry Potter", "J.K. Rowling", true);
    book b2("The Lord of the Rings", "J.R.R. Tolkien", true);
    book b3("The Hunger Games", "Suzanne Collins", true);
    string ch, choices;
    int choice;
    do
    {
        cout << "Book Library\n";
        cout << "1. Display Book Information\n";
        cout << "2. Borrow a Book\n";
        cout << "3. Return a Book\n";
        cout << "Enter your choice: ";
        cin >> choices;
        if(choices == "1")
        {
            cout << "Books available: \n";
            b1.display();
            b2.display();
            b3.display();
        }
        else if(choices == "2")
        {
            cout << "Which book do you want to borrow?\n";
            cout<<"Enter the number of the book you want to borrow: ";
            
            cin >> choice;
            switch(choice)
            {
                case 1:
                    b1.borrowbook();
                    break;
                case 2:
                    b2.borrowbook();
                    break;
                case 3:
                    b3.borrowbook();
                    break;
                default:
                    cout << "Invalid choice.\n";
            }

            cout << "Do you want to borrow another book? (y/n): ";
            cin >> ch;
            if(ch == "n")
            {
                cout << "Books available: \n";
                b1.display();
                b2.display();
                b3.display();
            }
        }
        else if(choices == "3")
        {
            cout << "Which book do you want to return?\n";
            cout<<"Enter the number of the book you want to return: ";
            cin >> choice;
            switch(choice)
            {
                case 1:
                    b1.returnbook();
                    break;
                case 2:
                    b2.returnbook();
                    break;  
                case 3:
                    b3.returnbook();
                    break;
                default:
                    cout << "Invalid choice.\n";
            }
        }
        else
        {
            cout << "Invalid choice.\n";
        }

        cout << "Do you want to continue? (y/n): ";
        cin >> ch;
    } while (ch == "y" || ch == "Y"); 
    return 0;
}