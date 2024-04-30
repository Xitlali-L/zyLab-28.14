#include <iostream>
#include "ItemToPurchase.h"
using namespace std;

ItemToPurchase::ItemToPurchase(string n, string des, double pri, int qty) {
name = n;
itemDescription = des;
price = pri;
quantity = qty;
}

void ItemToPurchase::SetName(string n) {
name = n;
}

void ItemToPurchase::SetDescription(string des) {
itemDescription = des;
}

void ItemToPurchase::SetPrice(double pri) {
price = pri;
}

void ItemToPurchase::SetQuantity(int qty) {
quantity = qty;
}

string ItemToPurchase::GetName() const {
return name;
}

string ItemToPurchase::GetDescription() const {
return itemDescription;
}

double ItemToPurchase::GetPrice() const {
return price;
}

int ItemToPurchase::GetQuantity() const {
return quantity;
}

void ItemToPurchase::PrintItemCost() const {
cout << name << ' ' << quantity << " @ $" << price << " = $" << quantity*price << endl;
}

void ItemToPurchase::PrintItemDescription() const {
cout << name << ": " << itemDescription << endl;
}
