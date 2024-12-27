#include<iostream>
#include<map>
using namespace std;
class ShoppingCart
{
private:
    map<string, int> items;
public:
    void addItem(string item, int quantity)
    {
        items[item] += quantity;
    }
    void removeitem(string item)
    {
        items.erase(item);
    }
    void displayCart()
    {
        for(auto i: items)
        {
            cout<<i.first<<" : "<<i.second<<endl;
        }
    }
};
int main()
{
    ShoppingCart cart;
    for(int i=0; i<5; i++)
    {
        cart.addItem("Item "+to_string(i), i+1);
    }
    cart.removeitem("item3");
    cart.displayCart();

    return 0;
}