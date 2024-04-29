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
   ItemToPurchase item;
   string itemName;
   int qty;
   string description;
   int price;

   while(true){
   switch(option){
      case a:
      cout << "ADD ITEM FROM CART" << endl;
      cout << "Enter the item name:" << endl;
      cin >> itemName;
      cout << "Enter the item Description:" << endl;
      cin >> description;
      cout << "Enter the item price:" << endl;
      cin >> price;
      cout << "Enter the item quantity:" << endl;
      cin >> qty;
      theCart.AddItem(item);    //check this!!!
      break;
      case d:
      cout << "REMOVE ITEM FROM CART" << endl;
      cout << "Enter name of item to remove:" << endl;
      cin >> itemName;
      theCart.RemoveItem(string itemName);
      break;
      case c:
      cout << "CHANGE ITEM QUANTITY" << endl;
      cout << "Enter the item name:" << endl;
      cin >> itemName;
      cout << endl;
      cout << "Enter the new quantity:" << endl;
      cin >> qty;
      theCart.ModifyItem(item);
      break;
      case i:  //Output item description: PrintDescriptions() 
      cout << "OUTPUT ITEMS' DESCRIPTIONS" << endl;
      theCart.PrintDescriptions();
      break;
      case o: //Output shopping cart: PrintTotal() 
      cout << "OUTPUT SHOPPING CART" << endl;
      theCart.PrintTotal();
      break;
      case q: //
      break;
      break;
      default:
      
      
   
   }
   }
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
