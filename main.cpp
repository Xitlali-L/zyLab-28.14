// git repository link
// team members: Xitlali Lopez and Kamile Cerna

#include <iostream>
#include <iomanip>
using namespace std;

#include "ShoppingCart.h"

void PrintMenu() {
   /* Type your code here */
   cout << "MENU" << endl;
   cout << "a - Add item to cart" << endl;
   cout << "d - Remove item from cart" << endl;
   cout << "c - Change item quantity" << endl;
   cout << "i - Output items' descriptions" << endl;
   cout << "o - Output shopping cart" << endl;
   cout << "q - Quit" << endl;
}

void ExecuteMenu(char option, ShoppingCart& theCart) {
   /* Type your code here */
   
   
}

int main() {
   /* Type your code here */
   string cusName;
   string date;

   cout << "Enter customer's name: " << endl;
   cin >> cusName;
   cout << endl;
   cout << "Enter today's date: " << endl;
   cin >> date;
   cout << endl;

   cout << "Customer name: " << cusName << endl;
   cout << "Today's date: " << date << endl;

   ShoppingCart cart = (cusName, date);
   
   
   return 0;
}
