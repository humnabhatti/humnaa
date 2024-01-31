#include "data_header.h"

using namespace std;

CartItem::CartItem(string name, float price, int quant)
{
    itemName = name;
    itemPrice = price;
    quantity = quant;
};
