#include "data_header.h"

using namespace std;
void Shoppingcart::GOLDEN_customer()
{
    cout << "YOU ARE OUR GOLDEN CUSTOMER" << endl;
}
void Shoppingcart::SILVER_customer()
{
    cout << "YOU ARE OUR SILVER CUSTOMER" << endl;
}
void Shoppingcart::PLATINUM_customer()
{
    cout << "YOU ARE OUR PLATINUM CUSTOMER" << endl;
}
void Shoppingcart::addToCart(string itemName, float itemPrice, int quantity)
{

    cart.push_back(CartItem(itemName, itemPrice, quantity));
    string myuser;
    cout << "enter your name first" << endl;
    cin >> myuser;
    ofstream cartFile(myuser + "cart.txt", ios::app);
    if (cartFile.is_open())
    {
        cartFile << "Item: " << itemName << ", Price: " << itemPrice << ", Quantity: " << quantity << endl;
        cartFile.close();
        cout << "Item added to cart." << endl;
    }
    else
    {
        cout << "Error: Unable to add item to cart." << endl;
    }
}
void Shoppingcart::addToBill(string itemName, float itemPrice, int quantity)
{

    string myuser;
    cout << "Enter your name first" << endl;
    cin >> myuser;

    float totalItemPrice = itemPrice * quantity;

    ofstream billFile(myuser + "_bill.txt", ios::app);
    if (billFile.is_open())
    {
        ifstream f(myuser + "_bill.txt");
        char c;
        int store;
        int i = 0;
        while (f.get(c))
        {
            if (c == '\n')
            {
                i++;
                store = i;
            }
        }

        if (i / 2 == 10)
        {
            cout << "recieved Golden Card" << endl;
            billFile << myuser << "recieved Golden Card" << endl;
            billFile << "50% /off on Golden Card" << endl;
            totalItemPrice /= 2;
            GOLDEN_customer();
        }
        else if (i / 2 == 5)
        {
            cout << "recieved Golden Card" << endl;
            billFile << myuser << "recieved silver Card" << endl;
            billFile << "30% /off on Golden Card" << endl;
            totalItemPrice /= 2;
            SILVER_customer();
        }
        else if (i / 2 == 3)
        {
            cout << "recieved Golden Card" << endl;
            billFile << myuser << "recieved platinum Card" << endl;
            billFile << "10% /off on Golden Card" << endl;
            totalItemPrice /= 2;
            PLATINUM_customer();
        }

        billFile << "Item: " << itemName << ", Price: " << totalItemPrice << ", Quantity: " << quantity << endl;
        billFile << i << endl;
        billFile.close();
        cout << "Item added to bill." << endl;
    }
    else
    {
        cout << "Error: Unable to add item to bill." << endl;
    }
}
void Shoppingcart::refund()
{

    string myuser;
    cout << "Enter your name first: ";
    cin >> myuser;
    ifstream billFile(myuser + "_bill.txt");
    if (billFile.is_open())
    {
        string billItem;
        vector<string> billItems;
        while (getline(billFile, billItem))
        {
            cout << billItem << endl;
            billItems.push_back(billItem);
        }
        string refundedItem;
        cout << "Enter the name of the item you want to refund (or 'cancel' to cancel): ";
        cin >> refundedItem;

        if (refundedItem == "cancel" || refundedItem == "Cancel")
        {
            cout << "Refund canceled." << endl;
            return;
        }

        auto refundItemIt = find_if(billItems.begin(), billItems.end(), [&](const string &item)
                                    { return item.find(refundedItem) != string::npos; });

        if (refundItemIt != billItems.end())
        {

            size_t priceStart = refundItemIt->find("Price: ") + 7;
            size_t priceEnd = refundItemIt->find(", Quantity:");
            string priceStr = refundItemIt->substr(priceStart, priceEnd - priceStart);
            float refundedAmount = stof(priceStr);

            cout << "Refund successful!" << endl;
            cout << "Refunded Item: " << refundedItem << endl;
            cout << "Refund Amount: " << refundedAmount << endl;

            billFile.close();
            ofstream updatedBillFile(myuser + "_bill.txt");
            for (const string &item : billItems)
            {
                if (item.find(refundedItem) == string::npos)
                {
                    updatedBillFile << item << endl;
                }
            }
            updatedBillFile.close();
        }
        else
        {
            cout << "Item not found in the bill. Refund canceled." << endl;
        }
    }
    else
    {
        cout << "Error: Unable to open bill file." << endl;
    }
}
void Shoppingcart::deleteCartItem(int index)
{

    string myuser;
    cout << "Enter your name first: ";
    cin >> myuser;

    if (index >= 0 && index < cart.size())
    {
        cout << "Item deleted from cart: " << cart[index].itemName << endl;
        bill -= cart[index].itemPrice * cart[index].quantity;
        cart.erase(cart.begin() + index);
        ofstream cartFile(myuser + "cart.txt");
        if (cartFile.is_open())
        {
            for (const auto &item : cart)
            {
                cartFile << "Item: " << item.itemName << ", Price: " << item.itemPrice << ", Quantity: " << item.quantity << endl;
            }
            cartFile.close();
        }
        else
        {
            cout << "Error: Unable to update cart file." << endl;
        }
    }
    else
    {
        cout << "Invalid index. No item deleted." << endl;
    }
}
void Shoppingcart::displayCartItemsFromFile()
{
    string myuser;
    cout << "Enter your name first: ";
    cin >> myuser;
    ifstream cartFile(myuser + "cart.txt");
    if (cartFile.is_open())
    {
        string item;
        cartItems.clear();
        while (getline(cartFile, item))
        {
            cartItems.push_back(item);
        }
        cartFile.close();
    }

    cout << "Cart Items:" << endl;
    for (int i = 0; i < cartItems.size(); ++i)
    {
        cout << i + 1 << ". " << cartItems[i] << endl;
    }
}
void Shoppingcart::addTowishlist(string itemName, float itemPrice, int quantity)
{

    wish.push_back(wishlist(itemName, itemPrice, quantity));

    string myuser;
    cout << "Enter your name first" << endl;
    cin >> myuser;

    ofstream wishFile(myuser + "_wishlist.txt", ios::app);
    if (wishFile.is_open())
    {
        wishFile << "Item: " << itemName << ", Price: " << itemPrice << ", Quantity: " << quantity << endl;
        wishFile.close();
        cout << "Item added to wishlist." << endl;
    }
    else
    {
        cout << "Error: Unable to add item to wishlist." << endl;
    }
}
void Shoppingcart::displaywishlistFromFile()
{
    string myuser;
    cout << "Enter your name first" << endl;
    cin >> myuser;

    ifstream wishFile(myuser + "_wishlist.txt");
    if (wishFile.is_open())
    {
        string item;
        while (getline(wishFile, item))
        {
            wishlists.push_back(item);
        }
        wishFile.close();
    }

    cout << "Wishlist Items:" << endl;
    for (const string &wishlist : wishlists)
    {
        cout << wishlist << endl;
    }
}
void Shoppingcart::viewMOBILE(char item)
{
    switch (item)
    {
    case '1':
        cout << "Details of Apple Phone:" << endl;
        cout << "APPLE "
             << ": PRICE"
             << "80000" << endl;
        break;
    case '2':
        cout << "Details of Samsung Phone:" << endl;
        cout << "SAMSUNG "
             << ": PRICE"
             << "50000" << endl;
        break;
    case '3':
        cout << "Details of Vivo Phone:" << endl;
        cout << "VIVO "
             << ": PRICE"
             << "30000" << endl;
        break;
    case '4':
        cout << "Details` of Nokia Phone:" << endl;
        cout << "NOKIA "
             << ": PRICE"
             << "10000" << endl;
        break;
    default:
        cout << "Invalid item!" << endl;
        break;
    }
}
void Shoppingcart::viewLAPTOP(char item)
{
    switch (item)
    {
    case '1':
        cout << "Details of MAC LAPTOP:" << endl;
        cout << "MAC "
             << ": PRICE"
             << "100000" << endl;
        break;
    case '2':
        cout << "Details of DELL LAPTOP:" << endl;
        cout << "DELL "
             << ": PRICE"
             << "80000" << endl;
        break;
    case '3':
        cout << "Details of LENOVO LAPTOP:" << endl;
        cout << "LENOVO "
             << ": PRICE"
             << "50000" << endl;
        break;
    case '4':
        cout << "Details of HP LAPTOP:" << endl;
        cout << "HP "
             << ": PRICE"
             << "50000" << endl;
        break;
    default:
        cout << "Invalid item!" << endl;
        break;
    }
}
float Shoppingcart::calculateTotal()
{
    float total = 0;
    for (const auto &item : cart)
    {
        total += item.itemPrice * item.quantity;
    }
    return total;
}
Shoppingcart::Shoppingcart()
{

    for (int i = 0; i < 200; ++i)
    {
        APPLE[i] = 10;   // Initial quantity for APPLE phones
        SAMSUNG[i] = 20; // Initial quantity for SAMSUNG phones
        VIVO[i] = 30;    // Initial quantity for VIVO phones
        NOKIA[i] = 40;
        MAC[i] = 10;
        DELL[i] = 20;
        LENOVO[i] = 30;
        HP[i] = 40; // Initial quantity for NOKIA phones
        // Initialize other arrays if needed
    }
}
void Shoppingcart::displayMobileDetails()
{

    cout << "\t\t\tMOBILE DETAILS" << endl;
    cout << "\t\t[1] APPLE => PRICE 80,000" << endl;
    cout << "\t\t[2] SAMSUNG => PRICE 50,000" << endl;
    cout << "\t\t[3] VIVO => PRICE 30,000" << endl;
    cout << "\t\t[4] NOKIA => PRICE 10,000" << endl;
}
void Shoppingcart::electronics()
{
    char choice;
    char item;
    int quantity;

    cout << "\t\t\t\tWELCOME TO MOBILE CENTER" << endl;
    cout << "\t\t\t\tFOLLOW THESE INSTRUCTIONS" << endl;
    cout << "ENTER P FOR PHONES" << endl;
    cout << "ENTER L FOR LAPTOPS" << endl;
    cin >> choice;

    if (choice == 'p' || choice == 'P')
    {
    x:

        displayMobileDetails();
        cout << "\t\t ENTER YOUR CHOICE" << endl;
        cin >> item;

        switch (item)
        {
        case '1':
            currentItemSelected = "APPLE";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (APPLE[0] < restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    APPLE[i] = 200;
                }
            }

            if (APPLE[0] >= quantity)
            {
                APPLE[0] -= quantity;
                cout << quantity << " APPLE phones added to the cart." << endl;
                bill += quantity * 80000;
                cout << "YOUR BILL IS " << bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '2':
            currentItemSelected = "SAMSUNG";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (SAMSUNG[0] < restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    SAMSUNG[i] = 200;
                }
            }

            if (SAMSUNG[0] >= quantity)
            {
                SAMSUNG[0] -= quantity;
                cout << quantity << " SAMSUNG phones added to the cart." << endl;
                bill += quantity * 50000;
                cout << "YOUR BILL IS " << bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '3':
            currentItemSelected = "VIVO";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (VIVO[0] < restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    VIVO[i] = 200;
                }
            }

            if (VIVO[0] >= quantity)
            {
                VIVO[0] -= quantity;
                cout << quantity << " VIVO phones added to the cart." << endl;
                bill += quantity * 30000;
                cout << "YOUR BILL IS " << bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '4':
            currentItemSelected = "NOKIA";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (NOKIA[0] < restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    NOKIA[i] = 200;
                }
            }

            if (NOKIA[0] >= quantity)
            {
                NOKIA[0] -= quantity;
                cout << quantity << " NOKIA phones added to the cart." << endl;
                bill += quantity * 10000;
                cout << "YOUR BILL IS " << bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        default:
            cout << "Invalid choice." << endl;
            goto x;
        }
        cout << "Do you want to buy now? (y/n): ";
        char buyChoice;
        cin >> buyChoice;

        if (buyChoice == 'y' || buyChoice == 'Y')
        {
            cout << "Items bought successfully!" << endl;
            cout << "_______________________________" << endl;
            cout << "|     YOUR BILL               |" << endl;
            cout << "| Total: " << bill << " \t\t      |" << endl;
            cout << "| " << currentItemSelected << " |" << endl;
            cout << "|                             |" << endl;
            cout << "|        THANK YOU            |" << endl;
            cout << "|_____________________________|" << endl;

            addToBill(currentItemSelected, bill, quantity);
        }
        else
        {
            cout << "Select an option: " << endl;
            cout << "1. Add to Cart" << endl;
            cout << "2. Add to Wishlist" << endl;
            cout << "3. View Product Details" << endl;
            int userOption;
            cin >> userOption;
            switch (userOption)
            {

            case 1:
                int a;

                addToCart(currentItemSelected, bill, quantity);
                cout << "DO YOU WANT TO LOOK INTO CART /press 1" << endl;
                cin >> a;
                if (a == 1)
                {
                    displayCartItemsFromFile();
                    calculateTotal();
                    cout << "Do you want to delete an item from the cart? (y/n): ";
                    char deleteChoice;
                    cin >> deleteChoice;

                    if (deleteChoice == 'y' || deleteChoice == 'Y')
                    {
                        int deleteIndex;
                        cout << "Enter the index of the item you want to delete: ";
                        cin >> deleteIndex;
                        deleteCartItem(deleteIndex - 1);
                        displayCartItemsFromFile();
                        calculateTotal();
                    }
                    else
                    {

                        cout << "Proceeding with other actions or ending the process..." << endl;
                    }
                }

                break;
            case 2:
                addTowishlist(currentItemSelected, bill, quantity);
                cout << "Item added to wishlist!" << endl;
                cout << "DO YOU WANT TO LOOK INTO WISHLIST/press 1" << endl;
                cin >> a;
                if (a == 1)
                {
                    displaywishlistFromFile();
                }
                break;
            case 3:

                viewMOBILE(item);
                break;
            }
        }
    }
    else if (choice == 'l' || choice == 'L')
    {
    y:
        cout << "\t\t\tMLAPTOP DETAILS" << endl;
        cout << "\t\t[1] MAC => PRICE 100,000" << endl;
        cout << "\t\t[2] DELL => PRICE 80,000" << endl;
        cout << "\t\t[3] LENOVO => PRICE 50,000" << endl;
        cout << "\t\t[4] HP => PRICE 50,000" << endl;
        cout << endl;

        cout << "\t\t ENTER YOUR CHOICE" << endl;
        cin >> item;

        switch (item)
        {
        case '1':
            currentItemSelected = "MAC ";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (MAC[0] < restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    MAC[i] = 200;
                }
            }

            if (MAC[0] >= quantity)
            {
                MAC[0] -= quantity;
                cout << quantity << "  MAC LAPTOP added to the cart." << endl;
                bill += quantity * 80000;
                cout << "YOUR BILL IS " << bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '2':
            currentItemSelected = "DELL";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (DELL[0] < restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    DELL[i] = 200;
                }
            }

            if (DELL[0] >= quantity)
            {
                DELL[0] -= quantity;
                cout << quantity << " DELL LAPTOP added to the cart." << endl;
                bill += quantity * 80000;
                cout << "YOUR BILL IS " << bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '3':
            currentItemSelected = "LENOVO";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (LENOVO[0] < restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    LENOVO[i] = 200;
                }
            }

            if (LENOVO[0] >= quantity)
            {
                LENOVO[0] -= quantity;
                cout << quantity << " LENOVO LAPTOPS added to the cart." << endl;
                bill += quantity * 80000;
                cout << "YOUR BILL IS " << bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '4':
            currentItemSelected = "HP";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (HP[0] < restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    HP[i] = 200;
                }
            }

            if (HP[0] >= quantity)
            {
                HP[0] -= quantity;
                cout << quantity << " HP LAPTOP added to the cart." << endl;
                bill += quantity * 80000;
                cout << "YOUR BILL IS " << bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        default:
            cout << "Invalid choice." << endl;
            goto y;
        }
        cout << "Do you want to buy now? (y/n): ";
        char buyChoice;
        cin >> buyChoice;

        if (buyChoice == 'y' || buyChoice == 'Y')
        {
            cout << "Items bought successfully!" << endl;
            cout << "_______________________________" << endl;
            cout << "|     YOUR BILL               |" << endl;
            cout << "| Total: " << bill << " \t\t      |" << endl;
            cout << "| " << currentItemSelected << " |" << endl;
            cout << "|                             |" << endl;
            cout << "|        THANK YOU            |" << endl;
            cout << "|_____________________________|" << endl;
            addToBill(currentItemSelected, bill, quantity);
        }
        else
        {
            cout << "Select an option: " << endl;
            cout << "1. Add to Cart" << endl;
            cout << "2. Add to Wishlist" << endl;
            cout << "3. View Product Details" << endl;
            int userOption;
            cin >> userOption;
            switch (userOption)
            {

            case 1:
                int a;

                addToCart(currentItemSelected, bill, quantity);
                cout << "DO YOU WANT TO LOOK INTO CART /press 1" << endl;
                cin >> a;
                if (a == 1)
                {
                    displayCartItemsFromFile();
                    calculateTotal();
                    cout << "Do you want to delete an item from the cart? (y/n): ";
                    char deleteChoice;
                    cin >> deleteChoice;

                    if (deleteChoice == 'y' || deleteChoice == 'Y')
                    {
                        int deleteIndex;
                        cout << "Enter the index of the item you want to delete: ";
                        cin >> deleteIndex;
                        deleteCartItem(deleteIndex - 1);
                        displayCartItemsFromFile();
                        calculateTotal();
                    }
                    else
                    {

                        cout << "Proceeding with other actions or ending the process..." << endl;
                    }
                }

                break;
            case 2:
                addTowishlist(currentItemSelected, bill, quantity);
                cout << "Item added to wishlist!" << endl;
                cout << "DO YOU WANT TO LOOK INTO WISHLIST/press 1" << endl;
                cin >> a;
                if (a == 1)
                {
                    displaywishlistFromFile();
                }
                break;
            case 3:

                viewLAPTOP(item);
                break;
            }
        }
    }
}
void Shoppingcart::physicalElectronics()
{

    char choice;
    char item;
    int quantity;
k:
    cout << "\t\t\t\tWELCOME TO MOBILE CENTER" << endl;
    cout << "\t\t\t\tFOLLOW THESE INSTRUCTIONS" << endl;
    cout << "ENTER P FOR PHONES" << endl;
    cout << "ENTER L FOR LAPTOPS" << endl;
    cin >> choice;

    if (choice == 'p' || choice == 'P')
    {
    x:
        displayMobileDetails();
        cout << "\t\t ENTER YOUR CHOICE" << endl;
        cin >> item;

        switch (item)
        {
        case '1':
            currentItemSelected = "APPLE";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (APPLE[0] < restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    APPLE[i] = 200;
                }
            }

            if (APPLE[0] >= quantity)
            {
                APPLE[0] -= quantity;
                bill += quantity * 80000;
                cout << "YOUR BILL IS " << bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '2':
            currentItemSelected = "SAMSUNG";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (SAMSUNG[0] < restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    SAMSUNG[i] = 200;
                }
            }

            if (SAMSUNG[0] >= quantity)
            {
                SAMSUNG[0] -= quantity;

                bill += quantity * 80000;
                cout << "YOUR BILL IS " << bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '3':
            currentItemSelected = "VIVO";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (VIVO[0] < restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    VIVO[i] = 200;
                }
            }

            if (VIVO[0] >= quantity)
            {
                VIVO[0] -= quantity;

                bill += quantity * 80000;
                cout << "YOUR BILL IS " << bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '4':
            currentItemSelected = "NOKIA";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (NOKIA[0] < restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    NOKIA[i] = 200;
                }
            }

            if (NOKIA[0] >= quantity)
            {
                NOKIA[0] -= quantity;

                bill += quantity * 80000;
                cout << "YOUR BILL IS " << bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        default:
            cout << "Invalid choice." << endl;
            goto x;
        }
    }
    else if (choice == 'l' || choice == 'L')
    {
    y:
        cout << "\t\t\tMLAPTOP DETAILS" << endl;
        cout << "\t\t[1] MAC => PRICE 100,000" << endl;
        cout << "\t\t[2] DELL => PRICE 80,000" << endl;
        cout << "\t\t[3] LENOVO => PRICE 50,000" << endl;
        cout << "\t\t[4] HP => PRICE 50,000" << endl;
        cout << endl;

        cout << "\t\t ENTER YOUR CHOICE" << endl;
        cin >> item;

        switch (item)
        {
        case '1':
            currentItemSelected = "MAC ";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (MAC[0] < restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    MAC[i] = 200;
                }
            }

            if (MAC[0] >= quantity)
            {
                MAC[0] -= quantity;
                cout << quantity << "  MAC LAPTOP added to the cart." << endl;
                bill += quantity * 80000;
                cout << "YOUR BILL IS " << bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '2':
            currentItemSelected = "DELL";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (DELL[0] < restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    DELL[i] = 200;
                }
            }

            if (DELL[0] >= quantity)
            {
                DELL[0] -= quantity;
                cout << quantity << " DELL LAPTOP added to the cart." << endl;
                bill += quantity * 80000;
                cout << "YOUR BILL IS " << bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '3':
            currentItemSelected = "LENOVO";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (LENOVO[0] < restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    LENOVO[i] = 200;
                }
            }

            if (LENOVO[0] >= quantity)
            {
                LENOVO[0] -= quantity;
                cout << quantity << " LENOVO LAPTOPS added to the cart." << endl;
                bill += quantity * 80000;
                cout << "YOUR BILL IS " << bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '4':
            currentItemSelected = "HP";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (HP[0] < restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    HP[i] = 200;
                }
            }

            if (HP[0] >= quantity)
            {
                HP[0] -= quantity;
                cout << quantity << " HP LAPTOP added to the cart." << endl;
                bill += quantity * 80000;
                cout << "YOUR BILL IS " << bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        default:
            cout << "Invalid choice." << endl;
            goto y;
        }
    }
    else
    {
        cout << "invalid choice" << endl;
        goto k;
    }
}
