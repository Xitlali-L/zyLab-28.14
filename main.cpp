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
   string temp1;
   int temp2;
   double price;
   
   switch(option){
      case a:
      cout << "ADD ITEM FROM CART" << endl;
      ItemToPurchase item;
      cin.ignore();
      cout << "Enter the item name:" << endl;
      getline(cin, temp1)
      item.SetName(temp1);
      cout << "Enter the item Description:" << endl;
      getline(cin, temp1);
      item.SetDescription(temp1);
      cout << "Enter the item price:" << endl;
      cin >> price;
      item.SetPrice(price);
      cout << "Enter the item quantity:" << endl;
      cin >> temp2;
      item.SetQuantity(temp2);
      theCart.AddItem(item);    //check this!!!
      break;
      case d:
      cout << "REMOVE ITEM FROM CART" << endl;
      string itemName;
      cin.ignore();
      cout << "Enter name of item to remove:" << endl;
      getline(cin, itemName);
      theCart.RemoveItem(itemName);
      break;
      case c:
      cout << "CHANGE ITEM QUANTITY" << endl;
      string itemName;
      int newQty;
      cin.ignore();
      cout << "Enter the item name:" << endl;
      getline(cin, itemName);
      cout << "Enter the new quantity:" << endl;
      cin >> newQty;
      ItemToPurchase items(itemName, "none", 0.0, newQty);
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
      cout << "Quit program." << endl;
      break;
   }
}

int main() {
   /* Type your code here */
   string cusName;
   string date;

   cout << "Enter customer's name: " << endl;
   getline(cin, cusName);
   cout << "Enter today's date: " << endl;
   getline(cin, date);

   cout << endl << "Customer name: " << cusName << endl;
   cout << "Today's date: " << date << endl;

   ShoppingCart cart(cusName, date);

   char options = 0;
   while(options != 'q'){
      if(options == 0 || options == 'a' || options == 'd' || options == 'c' || options == 'i' || options == 'o' || options == 'q'){
         cout << endl;
         PrintMenu();
         cout << endl;
      }
      cout << "Choose an option:" << endl;
      cin >> options;
      ExecuteMenu(options, cart);
   }
   return 0;
}
