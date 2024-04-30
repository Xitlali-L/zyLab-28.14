// git repository link
// team members: Xitlali Lopez and Kamile Cerna 

#include <iostream>
#include <iomanip>
using namespace std;
#include "ShoppingCart.h"
void PrintMenu() {

    cout << "MENU" << endl;
    cout << "a - Add item to cart" << endl;
    cout << "d - Remove item from cart" << endl;
    cout << "c - Change item quantity" << endl;
    cout << "i - Output items' descriptions" << endl;
    cout << "o - Output shopping cart" << endl;
    cout << "q - Quit" << endl;

}

 

void ExecuteMenu(char options, ShoppingCart& theCart) {

    string temp1;
    double prices;
    int temp2;
    switch (options) {
    case 'a': {
        cout << "ADD ITEM TO CART" << endl;
        ItemToPurchase newItems;
        cin.ignore(); 
        cout << "Enter the item name:" << endl;
        getline(cin, temp1);
        newItems.SetName(temp1);
        cout << "Enter the item description:" << endl;
        getline(cin, temp1);
        newItems.SetDescription(temp1);
        cout << "Enter the item price:" << endl;
        cin >> prices;
        newItems.SetPrice(prices);
        cout << "Enter the item quantity:" << endl;
        cin >> temp2;
        newItems.SetQuantity(temp2);
        theCart.AddItem(newItems);
        break;
    }
    case 'd': {
        cout << "REMOVE ITEM FROM CART" << endl;
        string nameItem;
        cin.ignore(); 
        cout << "Enter name of item to remove:" << endl;
        getline(cin, nameItem);
        theCart.RemoveItem(nameItem);
        break;
    }
    case 'c': {
        cout << "CHANGE ITEM QUANTITY" << endl;
        string nameItem;
        int newQty;
        cin.ignore(); // Clear input buffer
        cout << "Enter the item name:" << endl;
        getline(cin, nameItem);
        cout << "Enter the new quantity:" << endl;
        cin >> newQty;
        ItemToPurchase items(nameItem, "none", 0.0, newQty);
        theCart.ModifyItem(items);
        break;
    }
    case 'i':
        cout << "OUTPUT ITEMS' DESCRIPTIONS" << endl;
        theCart.PrintDescriptions();
        break;
    case 'o':
        theCart.PrintTotal();
        break;
    case 'q':
        break;
    }
}

 

int main() {

    string custName;
    string currDate;

    cout << "Enter customer's name:" << endl;
    getline(cin, custName);

    cout << "Enter today's date:" << endl;
    getline(cin, currDate);

    cout << endl << "Customer name: " << custName << endl;
    cout << "Today's date: " << currDate << endl;

    ShoppingCart theCart(custName, currDate);

    char options = 0;
    while (options != 'q') {
        if (options == 0 || options == 'a' || options == 'd' || options == 'c' || options == 'i' || options == 'o' || options == 'q') {
            cout << endl;
            PrintMenu();
            cout << endl;
        }
        cout << "Choose an option:" << endl;
        cin >> options;
        ExecuteMenu(options, theCart);
    }
    return 0;

}
