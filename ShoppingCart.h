#ifndef SHOPPING_CART_H
#define SHOPPING_CART_H

#include <string>
#include <vector>
using namespace std;

#include "ItemToPurchase.h"

class ShoppingCart {
   public:
      ShoppingCart();
      ShoppingCart(string name, string date);
      
      string GetCustomerName() const;
      string GetDate() const;
      
      void AddItem(const ItemToPurchase& item);
      void RemoveItem(const string& name);
      
      void ModifyItem(const ItemToPurchase& item);
      
      int GetNumItemsInCart() const;
      double GetCostOfCart() const;
      
      void PrintTotal() const;
      void PrintDescriptions() const;
      
   
   private:
      string customerName;
      string currentDate;
      vector<ItemToPurchase> cartItems;
};

#endif
