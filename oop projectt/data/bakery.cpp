#include "data_header.h"

using namespace std;
void bakery::cake(char item)
{
    switch (item)
    {

    case '1':

        cout << "choclate_cake"
             << "PRICE =>1400 per pound" << endl;

        break;
    case '2':

        cout << "vanilla_cake"
             << "PRICE =>1200 per pound" << endl;

        break;
    case '3':
        cout << "caramel cake "
             << ": PRICE=>1400 per pound " << endl;

        break;

    default:
        cout << "Invalid item!" << endl;
        break;
    }
}
void bakery::brownies(char item)
{
    cout << "Details brownies:" << endl;
    switch (item)
    {

    case '1':

        cout << "fudge brownie"
             << ": PRICE"
             << "200 per piece" << endl;
        break;
    case '2':

        cout << "simple brownie "
             << ": PRICE"
             << "150 per piece" << endl;
        break;

    default:
        cout << "Invalid item!" << endl;
        break;
    }
}
void bakery::cookies(char item)
{
    cout << "Details of cookies" << endl;
    switch (item)
    {

    case '1':

        cout << "nutella cookie"
             << ": PRICE"
             << "200 per cookie" << endl;
        break;
    case '2':

        cout << "marbel cookie "
             << ": PRICE"
             << "170 per cookie" << endl;
        break;

    default:
        cout << "Invalid item!" << endl;
        break;
    }
}
void bakery::donuts(char item)
{

    int category;
    cout << "press 1 for filled donuts and 2 for unfilled donuts" << endl;
    cout << "enter category";
    cin >> category;
    if (category == 1)
    {
        cout << "DETAILS OF FILLED DONUTS" << endl;

        switch (item)
        {

        case '1':

            cout << "nutella filled donuts"
                 << ": PRICE"
                 << "200 per donuts" << endl;
            break;
        case '2':

            cout << "caramel filled donuts"
                 << ": PRICE"
                 << "200 per donuts" << endl;
            break;
        default:
            cout << "Invalid item!" << endl;
            break;
        }
    }
    else if (category == 2)
    {
        cout << "Details of UNFILLED DONUTS" << endl;
        switch (item)
        {

        case '1':

            cout << "unfilled nutella topped"
                 << ": PRICE"
                 << "170 per donuts" << endl;
            break;
        case '2':

            cout << "unfilled caramel topped "
                 << ": PRICE"
                 << "170 per donuts" << endl;
            break;
        default:
            cout << "Invalid item!" << endl;
            break;
        }
    }
}
void bakery::freshitems(char item)
{
    cout << "Details of FREASHLY BAKED ITEMS" << endl;
    switch (item)
    {

    case '1':

        cout << "BREAD"
             << ": PRICE"
             << "300" << endl;
        break;
    case '2':

        cout << "CHICKED FILLED BREAD "
             << ": PRICE"
             << "150" << endl;
        break;
    case '3':

        cout << "ARABIAN PIZZA "
             << ": PRICE"
             << "250" << endl;
        break;

    default:
        cout << "Invalid item!" << endl;
        break;
    }
}
bakery::bakery()
{
    for (int i = 0; i < 200; ++i)
    {
        CAKE[i] = 200;
        CHOCLATE_CAKE[i] = 200;
        VANILLA_CAKE[i] = 200;
        CARAMEL_CAKE[i] = 200;
        BROWNIES[i] = 200;
        SIMPLE_BROWNIE[i] = 200;
        FUDGE_BROWNIE[i] = 200;
        COOKIES[i] = 200;
        NUTELLA_COOKIE[i] = 200;
        MARBEL_COOKIE[i] = 200;
        BREAD[i] = 200;
        CHICKEN_FILLED_BREAD[i] = 200;
        ARABIAN_PIZZA[i] = 200;
        DONUTS[i] = 200;
        NUTELLA_FILLED_DONUTS[i] = 200;
        CARAMEL_FILLED[i] = 200;
        UNFILLED_NUTELLA_TOPPED[i] = 200;
        NUTELLA_TOPPED_DONUTS[i] = 200;
        UNFILLED_CARAMEL_TOPPED[i] = 200;
    }
}
void bakery::pieordie()
{

    char choice;
    int item;
    int quantity;
    Shoppingcart c;
    cout << "\t\t\t\tWELCOME TO PIE OR DIE BAKERY" << endl;
    cout << "\t\t\t\tFOLLOW THESE INSTRUCTION" << endl;
    cout << "ENTER C FOR CAKE" << endl;
    cout << "ENTER B FOR BROWNIES" << endl;
    cout << "ENTER K FOR COOKIES" << endl;
    cout << "ENTER D FOR DONUTS" << endl;
    cout << "ENTER F FOR FREASHLY BAKED ITEMS" << endl;
    cin >> choice;
    if (choice == 'C' || choice == 'c')
    {
    f:

        system("cls");
        cout << "\t\t\t CAKE DETAILS" << endl;
        cout << "\t\t[1] CHOCLATE CAKE => PRICE 1400" << endl;
        cout << "\t\t[2] CARAMEL CAKE => PRICE 1400" << endl;
        cout << "\t\t[3] VANILLA CAKE => PRICE 1200" << endl;

        cout << endl;
        cout << "\t\t ENTER YOUR CHOICE" << endl;
        cin >> item;
        string currentItemSelected;
        c.bill = 0;
        switch (item)
        {
        case 1:

            currentItemSelected = "CHOCLATE_CAKE";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (CHOCLATE_CAKE[0] < c.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    CHOCLATE_CAKE[i] = 200;
                }
            }

            if (CHOCLATE_CAKE[0] >= quantity)
            {
                CHOCLATE_CAKE[0] -= quantity;
                cout << quantity << " CHOCLATE_CAKE added to the cart." << endl;
                c.bill += quantity * 9000;
                cout << "YOUR BILL IS " << c.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;

        case 2:
            currentItemSelected = "CARAMEL_CAKE";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (CARAMEL_CAKE[0] < c.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    CARAMEL_CAKE[i] = 200;
                }
            }

            if (CARAMEL_CAKE[0] >= quantity)
            {
                CARAMEL_CAKE[0] -= quantity;
                cout << quantity << " CARAMEL_CAKE added to the cart." << endl;
                c.bill += quantity * 7500;
                cout << "YOUR BILL IS " << c.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case 3:
            currentItemSelected = "VANILLA_CAKE";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (VANILLA_CAKE[0] < c.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    VANILLA_CAKE[i] = 200;
                }
            }

            if (VANILLA_CAKE[0] >= quantity)
            {
                VANILLA_CAKE[0] -= quantity;
                cout << quantity << "VANILLA_CAKE added to the cart." << endl;
                c.bill += quantity * 7000;
                cout << "YOUR BILL IS " << c.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;

        default:
            cout << "Invalid choice." << endl;
            goto f;
        }

        cout << "Do you want to buy now? (y/n): ";
        char buyChoice;
        cin >> buyChoice;

        if (buyChoice == 'y' || buyChoice == 'Y')
        {
            cout << "Items bought successfully!" << endl;
            cout << "_______________________________" << endl;
            cout << "|     YOUR BILL               |" << endl;
            cout << "| Total: " << c.bill << " \t\t      |" << endl;
            cout << "| " << c.currentItemSelected << " |" << endl;
            cout << "|                             |" << endl;
            cout << "|        THANK YOU            |" << endl;
            cout << "|_____________________________|" << endl;

            c.addToBill(c.currentItemSelected, c.bill, quantity);
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

                c.addToCart(c.currentItemSelected, c.bill, quantity);
                cout << "DO YOU WANT TO LOOK INTO CART /press 1" << endl;
                cin >> a;
                if (a == 1)
                {
                    c.displayCartItemsFromFile();
                    c.calculateTotal();
                    cout << "Do you want to delete an item from the cart? (y/n): ";
                    char deleteChoice;
                    cin >> deleteChoice;

                    if (deleteChoice == 'y' || deleteChoice == 'Y')
                    {
                        int deleteIndex;
                        cout << "Enter the index of the item you want to delete: ";
                        cin >> deleteIndex;
                        c.deleteCartItem(deleteIndex - 1);
                        c.displayCartItemsFromFile();
                        c.calculateTotal();
                    }
                    else
                    {

                        cout << "Proceeding with other actions or ending the process..." << endl;
                    }
                }

                break;
            case 2:
                c.addTowishlist(c.currentItemSelected, c.bill, quantity);
                cout << "Item added to wishlist!" << endl;
                cout << "DO YOU WANT TO LOOK INTO WISHLIST/press 1" << endl;
                cin >> a;
                if (a == 1)
                {
                    c.displaywishlistFromFile();
                }
                break;
            case 3:

                cake(item);
                break;
            }
        }
    }

    else if (choice == 'b' || choice == 'B')
    {
    L:
        system("cls");
        cout << "\t\t\tBROWNIES DETAILS" << endl;
        cout << "\t\t[1] SIMPLE BROWNIE=> PRICE 170" << endl;
        cout << "\t\t[2] FUDGE BROWNIE => PRICE 200" << endl;

        cout << endl;
        cout << "\t\t ENTER YOUR CHOICE" << endl;
        cin >> item;
        string currentItemSelected;
        c.bill = 0;
        switch (item)
        {
        case 1:

            currentItemSelected = "SIMPLE BROWNIE";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (SIMPLE_BROWNIE[0] < c.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    SIMPLE_BROWNIE[i] = 200;
                }
            }

            if (SIMPLE_BROWNIE[0] >= quantity)
            {
                SIMPLE_BROWNIE[0] -= quantity;
                cout << quantity << " SIMPLE_BROWNIE added to the cart." << endl;
                c.bill += quantity * 9000;
                cout << "YOUR BILL IS " << c.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;

        case 2:
            currentItemSelected = "FUDGE_BROWNIE";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (FUDGE_BROWNIE[0] < c.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    FUDGE_BROWNIE[i] = 200;
                }
            }

            if (FUDGE_BROWNIE[0] >= quantity)
            {
                FUDGE_BROWNIE[0] -= quantity;
                cout << quantity << " FUDGE_BROWNIE added to the cart." << endl;
                c.bill += quantity * 7500;
                cout << "YOUR BILL IS " << c.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;

        default:
            cout << "Invalid choice." << endl;
            goto L;
        }

        cout << "Do you want to buy now? (y/n): ";
        char buyChoice;
        cin >> buyChoice;

        if (buyChoice == 'y' || buyChoice == 'Y')
        {
            cout << "Items bought successfully!" << endl;
            cout << "_______________________________" << endl;
            cout << "|     YOUR BILL               |" << endl;
            cout << "| Total: " << c.bill << " \t\t      |" << endl;
            cout << "| " << c.currentItemSelected << " |" << endl;
            cout << "|                             |" << endl;
            cout << "|        THANK YOU            |" << endl;
            cout << "|_____________________________|" << endl;

            c.addToBill(c.currentItemSelected, c.bill, quantity);
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

                c.addToCart(c.currentItemSelected, c.bill, quantity);
                cout << "DO YOU WANT TO LOOK INTO CART /press 1" << endl;
                cin >> a;
                if (a == 1)
                {
                    c.displayCartItemsFromFile();
                    c.calculateTotal();
                    cout << "Do you want to delete an item from the cart? (y/n): ";
                    char deleteChoice;
                    cin >> deleteChoice;

                    if (deleteChoice == 'y' || deleteChoice == 'Y')
                    {
                        int deleteIndex;
                        cout << "Enter the index of the item you want to delete: ";
                        cin >> deleteIndex;
                        c.deleteCartItem(deleteIndex - 1);
                        c.displayCartItemsFromFile();
                        c.calculateTotal();
                    }
                    else
                    {

                        cout << "Proceeding with other actions or ending the process..." << endl;
                    }
                }

                break;
            case 2:
                c.addTowishlist(c.currentItemSelected, c.bill, quantity);
                cout << "Item added to wishlist!" << endl;
                cout << "DO YOU WANT TO LOOK INTO WISHLIST/press 1" << endl;
                cin >> a;
                if (a == 1)
                {
                    c.displaywishlistFromFile();
                }
                break;
            case 3:

                brownies(item);
                break;
            }
        }
    }

    else if (choice == 'k' || choice == 'K')
    {
    d:
        system("cls");
        cout << "\t\t\tcookie details DETAILS" << endl;
        cout << "\t\t[1] NUTELLA COOKIE=> PRICE 200" << endl;
        cout << "\t\t[2]  MARBEL COOKIE=> PRICE 150" << endl;

        cout << endl;
        cout << "\t\t ENTER YOUR CHOICE" << endl;
        cin >> item;
        string currentItemSelected;
        c.bill = 0;
        switch (item)
        {
        case 1:

            currentItemSelected = " NUTELLA_COOKIE";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (NUTELLA_COOKIE[0] < c.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    NUTELLA_COOKIE[i] = 200;
                }
            }

            if (NUTELLA_COOKIE[0] >= quantity)
            {
                NUTELLA_COOKIE[0] -= quantity;
                cout << quantity << "  NUTELLA_COOKIE added to the cart." << endl;
                c.bill += quantity * 9000;
                cout << "YOUR BILL IS " << c.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;

        case 2:
            currentItemSelected = "MARBEL COOKIE";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (MARBEL_COOKIE[0] < c.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    MARBEL_COOKIE[i] = 200;
                }
            }

            if (MARBEL_COOKIE[0] >= quantity)
            {
                MARBEL_COOKIE[0] -= quantity;
                cout << quantity << " MARBEL_COOKIE added to the cart." << endl;
                c.bill += quantity * 7500;
                cout << "YOUR BILL IS " << c.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;

        default:
            cout << "Invalid choice." << endl;
            goto d;
        }

        cout << "Do you want to buy now? (y/n): ";
        char buyChoice;
        cin >> buyChoice;

        if (buyChoice == 'y' || buyChoice == 'Y')
        {
            cout << "Items bought successfully!" << endl;
            cout << "_______________________________" << endl;
            cout << "|     YOUR BILL               |" << endl;
            cout << "| Total: " << c.bill << " \t\t      |" << endl;
            cout << "| " << c.currentItemSelected << " |" << endl;
            cout << "|                             |" << endl;
            cout << "|        THANK YOU            |" << endl;
            cout << "|_____________________________|" << endl;

            c.addToBill(c.currentItemSelected, c.bill, quantity);
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

                c.addToCart(c.currentItemSelected, c.bill, quantity);
                cout << "DO YOU WANT TO LOOK INTO CART /press 1" << endl;
                cin >> a;
                if (a == 1)
                {
                    c.displayCartItemsFromFile();
                    c.calculateTotal();
                    cout << "Do you want to delete an item from the cart? (y/n): ";
                    char deleteChoice;
                    cin >> deleteChoice;

                    if (deleteChoice == 'y' || deleteChoice == 'Y')
                    {
                        int deleteIndex;
                        cout << "Enter the index of the item you want to delete: ";
                        cin >> deleteIndex;
                        c.deleteCartItem(deleteIndex - 1);
                        c.displayCartItemsFromFile();
                        c.calculateTotal();
                    }
                    else
                    {

                        cout << "Proceeding with other actions or ending the process..." << endl;
                    }
                }

                break;
            case 2:
                c.addTowishlist(c.currentItemSelected, c.bill, quantity);
                cout << "Item added to wishlist!" << endl;
                cout << "DO YOU WANT TO LOOK INTO WISHLIST/press 1" << endl;
                cin >> a;
                if (a == 1)
                {
                    c.displaywishlistFromFile();
                }
                break;
            case 3:

                cookies(item);
                break;
            }
        }
    }

    else if (choice == 'D' || choice == 'd')
    {
    r:

        system("cls");
        cout << "\t\t\tDONUTS  DETAILS" << endl;
        cout << "\t\t[1] NUTELLA FILLED => PRICE 200" << endl;
        cout << "\t\t[2]  CARAMEL FILLED=> PRICE 200" << endl;
        cout << "\t\t[3]  UNFILLED NUTELLA TOPPED => PRICE 200" << endl;
        cout << "\t\t[4] UNFILLED CARAMEL TOPPED => PRICE 200" << endl;
        cout << endl;
        cout << "\t\t ENTER YOUR CHOICE" << endl;
        cin >> item;
        string currentItemSelected;
        c.bill = 0;
        switch (item)
        {
        case 1:

            currentItemSelected = " NUTELLA_FILLED";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (NUTELLA_FILLED_DONUTS[0] < c.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    NUTELLA_FILLED_DONUTS[i] = 200;
                }
            }

            if (NUTELLA_FILLED_DONUTS[0] >= quantity)
            {
                NUTELLA_FILLED_DONUTS[0] -= quantity;
                cout << quantity << " NUTELLA_FILLED donuts added to the cart." << endl;
                c.bill += quantity * 9000;
                cout << "YOUR BILL IS " << c.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;

        case 2:
            currentItemSelected = "CARAMEL_FILLED";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (CARAMEL_FILLED[0] < c.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    CARAMEL_FILLED[i] = 200;
                }
            }

            if (CARAMEL_FILLED[0] >= quantity)
            {
                CARAMEL_FILLED[0] -= quantity;
                cout << quantity << " CARAMEL_FILLED donuts added to the cart." << endl;
                c.bill += quantity * 7500;
                cout << "YOUR BILL IS " << c.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case 3:
            currentItemSelected = "UNFILLED_NUTELLA_TOPPED";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (UNFILLED_NUTELLA_TOPPED[0] < c.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    UNFILLED_NUTELLA_TOPPED[i] = 200;
                }
            }

            if (UNFILLED_NUTELLA_TOPPED[0] >= quantity)
            {
                UNFILLED_NUTELLA_TOPPED[0] -= quantity;
                cout << quantity << " UNFILLED_NUTELLA_TOPPED donuts added to the cart." << endl;
                c.bill += quantity * 7000;
                cout << "YOUR BILL IS " << c.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case 4:
            currentItemSelected = "UNFILLED_CARAMEL_TOPPED";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (UNFILLED_CARAMEL_TOPPED[0] < c.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    UNFILLED_CARAMEL_TOPPED[i] = 200;
                }
            }

            if (UNFILLED_CARAMEL_TOPPED[0] >= quantity)
            {
                UNFILLED_CARAMEL_TOPPED[0] -= quantity;
                cout << quantity << " UNFILLED_CARAMEL_TOPPED donuts added to the cart." << endl;
                c.bill += quantity * 7000;
                cout << "YOUR BILL IS " << c.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;

        default:
            cout << "Invalid choice." << endl;
            goto r;
        }

        cout << "Do you want to buy now? (y/n): ";
        char buyChoice;
        cin >> buyChoice;

        if (buyChoice == 'y' || buyChoice == 'Y')
        {
            cout << "Items bought successfully!" << endl;
            cout << "_______________________________" << endl;
            cout << "|     YOUR BILL               |" << endl;
            cout << "| Total: " << c.bill << " \t\t      |" << endl;
            cout << "| " << c.currentItemSelected << " |" << endl;
            cout << "|                             |" << endl;
            cout << "|        THANK YOU            |" << endl;
            cout << "|_____________________________|" << endl;

            c.addToBill(c.currentItemSelected, c.bill, quantity);
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

                c.addToCart(c.currentItemSelected, c.bill, quantity);
                cout << "DO YOU WANT TO LOOK INTO CART /press 1" << endl;
                cin >> a;
                if (a == 1)
                {
                    c.displayCartItemsFromFile();
                    c.calculateTotal();
                    cout << "Do you want to delete an item from the cart? (y/n): ";
                    char deleteChoice;
                    cin >> deleteChoice;

                    if (deleteChoice == 'y' || deleteChoice == 'Y')
                    {
                        int deleteIndex;
                        cout << "Enter the index of the item you want to delete: ";
                        cin >> deleteIndex;
                        c.deleteCartItem(deleteIndex - 1);
                        c.displayCartItemsFromFile();
                        c.calculateTotal();
                    }
                    else
                    {

                        cout << "Proceeding with other actions or ending the process..." << endl;
                    }
                }

                break;
            case 2:
                c.addTowishlist(c.currentItemSelected, c.bill, quantity);
                cout << "Item added to wishlist!" << endl;
                cout << "DO YOU WANT TO LOOK INTO WISHLIST/press 1" << endl;
                cin >> a;
                if (a == 1)
                {
                    c.displaywishlistFromFile();
                }
                break;
            case 3:

                donuts(item);
                break;
            }
        }
    }
    else if (choice == 'F' || choice == 'f')
    {
    x:
        system("cls");
        cout << "\t\t\tfreashly baked items DETAILS" << endl;
        cout << "\t\t[1] BREAD => PRICE 300" << endl;
        cout << "\t\t[2]  CHICKEN FILLED BREAD=> PRICE 200" << endl;
        cout << "\t\t[3]  ARABIAN PIZZA => PRICE 250" << endl;

        cout << endl;
        cout << "\t\t ENTER YOUR CHOICE" << endl;
        cin >> item;
        string currentItemSelected;
        c.bill = 0;
        switch (item)
        {
        case 1:

            currentItemSelected = "BREAD";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (BREAD[0] < c.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {

                    BREAD[i] = 200;
                }
            }

            if (BREAD[0] >= quantity)
            {
                BREAD[0] -= quantity;
                cout << quantity << "BREAD added to the cart." << endl;
                c.bill += quantity * 300;
                cout << "YOUR BILL IS " << c.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;

        case 2:
            currentItemSelected = "CHICKEN_FILLED_BREAD";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (CHICKEN_FILLED_BREAD[0] < c.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    CHICKEN_FILLED_BREAD[i] = 200;
                }
            }

            if (CHICKEN_FILLED_BREAD[0] >= quantity)
            {
                CHICKEN_FILLED_BREAD[0] -= quantity;
                cout << quantity << " CHICKEN_FILLED_BREAD added to the cart." << endl;
                c.bill += quantity * 200;
                cout << "YOUR BILL IS " << c.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '3':
            currentItemSelected = "ARABIAN_PIZZA";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (ARABIAN_PIZZA[0] < c.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    ARABIAN_PIZZA[i] = 200;
                }
            }

            if (ARABIAN_PIZZA[0] >= quantity)
            {
                ARABIAN_PIZZA[0] -= quantity;
                cout << quantity << " ARABIAN_PIZZA added to the cart." << endl;
                c.bill += quantity * 7000;
                cout << "YOUR BILL IS " << c.bill << endl;
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
            cout << "| Total: " << c.bill << " \t\t      |" << endl;
            cout << "| " << c.currentItemSelected << " |" << endl;
            cout << "|                             |" << endl;
            cout << "|        THANK YOU            |" << endl;
            cout << "|_____________________________|" << endl;

            c.addToBill(c.currentItemSelected, c.bill, quantity);
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

                c.addToCart(c.currentItemSelected, c.bill, quantity);
                cout << "DO YOU WANT TO LOOK INTO CART /press 1" << endl;
                cin >> a;
                if (a == 1)
                {
                    c.displayCartItemsFromFile();
                    c.calculateTotal();
                    cout << "Do you want to delete an item from the cart? (y/n): ";
                    char deleteChoice;
                    cin >> deleteChoice;

                    if (deleteChoice == 'y' || deleteChoice == 'Y')
                    {
                        int deleteIndex;
                        cout << "Enter the index of the item you want to delete: ";
                        cin >> deleteIndex;
                        c.deleteCartItem(deleteIndex - 1);
                        c.displayCartItemsFromFile();
                        c.calculateTotal();
                    }
                    else
                    {

                        cout << "Proceeding with other actions or ending the process..." << endl;
                    }
                }

                break;
            case 2:
                c.addTowishlist(c.currentItemSelected, c.bill, quantity);
                cout << "Item added to wishlist!" << endl;
                cout << "DO YOU WANT TO LOOK INTO WISHLIST/press 1" << endl;
                cin >> a;
                if (a == 1)
                {
                    c.displaywishlistFromFile();
                }
                break;
            case 3:

                freshitems(item);
                break;
            }
        }
    }
    else
    {
        cout << "invalid choice" << endl;
    }
}
void bakery::physicalpieordie()
{
    char choice;
    char item;
    int quantity;
    Shoppingcart a;
    cout << "\t\t\t\tWELCOME TO PIE OR DIE BAKERY" << endl;
    cout << "\t\t\t\tFOLLOW THESE INSTRUCTION" << endl;
    cout << "ENTER C FOR CAKE" << endl;
    cout << "ENTER B FOR BROWNIES" << endl;
    cout << "ENTER K FOR COOKIES" << endl;
    cout << "ENTER D FOR DONUTS" << endl;
    cout << "ENTER F FOR FREASHLY BAKED ITEMS" << endl;
    cin >> choice;
    if (choice == 'C' || choice == 'c')
    {
    HEY:

        system("cls");
        cout << "\t\t\t CAKE DETAILS" << endl;
        cout << "\t\t[1] CHOCLATE CAKE => PRICE 1400" << endl;
        cout << "\t\t[2] CARAMEL CAKE => PRICE 1400" << endl;
        cout << "\t\t[3] VANILLA CAKE => PRICE 1200" << endl;

        cout << endl;
        cout << "\t\t ENTER YOUR CHOICE" << endl;
        cin >> item;
        string currentItemSelected;
        a.bill = 0;
        switch (item)
        {
        case '1':
        {

            currentItemSelected = "CHOCLATE_CAKE";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (CHOCLATE_CAKE[0] < a.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    CHOCLATE_CAKE[i] = 200;
                }
            }

            if (CHOCLATE_CAKE[0] >= quantity)
            {
                CHOCLATE_CAKE[0] -= quantity;
                cout << quantity << " CHOCLATE_CAKE added to the cart." << endl;
                a.bill += quantity * 9000;
                cout << "YOUR BILL IS " << a.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;

        case '2':
            currentItemSelected = "CARAMEL_CAKE";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (CARAMEL_CAKE[0] < a.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    CARAMEL_CAKE[i] = 200;
                }
            }

            if (CARAMEL_CAKE[0] >= quantity)
            {
                CARAMEL_CAKE[0] -= quantity;
                cout << quantity << " CARAMEL_CAKE added to the cart." << endl;
                a.bill += quantity * 7500;
                cout << "YOUR BILL IS " << a.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '3':
            currentItemSelected = "VANILLA_CAKE";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (VANILLA_CAKE[0] < a.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    VANILLA_CAKE[i] = 200;
                }
            }

            if (VANILLA_CAKE[0] >= quantity)
            {
                VANILLA_CAKE[0] -= quantity;
                cout << quantity << "VANILLA_CAKE added to the cart." << endl;
                a.bill += quantity * 7000;
                cout << "YOUR BILL IS " << a.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;

        default:
            cout << "Invalid choice." << endl;
            goto HEY;
        }
        }
    }
    else if (choice == 'b' || choice == 'B')
    {
    OD:
        system("cls");
        cout << "\t\t\tBROWNIES DETAILS" << endl;
        cout << "\t\t[1] SIMPLE BROWNIE=> PRICE 170" << endl;
        cout << "\t\t[2] FUDGE BROWNIE => PRICE 200" << endl;

        cout << endl;
        cout << "\t\t ENTER YOUR CHOICE" << endl;
        cin >> item;
        string currentItemSelected;
        a.bill = 0;
        switch (item)
        {
        case '1':
        {

            currentItemSelected = "SIMPLE BROWNIE";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (SIMPLE_BROWNIE[0] < a.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    SIMPLE_BROWNIE[i] = 200;
                }
            }

            if (SIMPLE_BROWNIE[0] >= quantity)
            {
                SIMPLE_BROWNIE[0] -= quantity;
                cout << quantity << " SIMPLE_BROWNIE added to the cart." << endl;
                a.bill += quantity * 9000;
                cout << "YOUR BILL IS " << a.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;

        case '2':
            currentItemSelected = "FUDGE_BROWNIE";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (FUDGE_BROWNIE[0] < a.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    FUDGE_BROWNIE[i] = 200;
                }
            }

            if (FUDGE_BROWNIE[0] >= quantity)
            {
                FUDGE_BROWNIE[0] -= quantity;
                cout << quantity << " FUDGE_BROWNIE added to the cart." << endl;
                a.bill += quantity * 7500;
                cout << "YOUR BILL IS " << a.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;

        default:
            cout << "Invalid choice." << endl;
            goto OD;
        }
        }
    }
    else if (choice == 'k' || choice == 'K')
    {
    ROD:
        system("cls");
        cout << "\t\t\tcookie details DETAILS" << endl;
        cout << "\t\t[1] NUTELLA COOKIE=> PRICE 200" << endl;
        cout << "\t\t[2]  MARBEL COOKIE=> PRICE 150" << endl;

        cout << endl;
        cout << "\t\t ENTER YOUR CHOICE" << endl;
        cin >> item;
        string currentItemSelected;
        a.bill = 0;
        switch (item)
        {
        case '1':
        {

            currentItemSelected = " NUTELLA_COOKIE";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (NUTELLA_COOKIE[0] < a.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    NUTELLA_COOKIE[i] = 200;
                }
            }

            if (NUTELLA_COOKIE[0] >= quantity)
            {
                NUTELLA_COOKIE[0] -= quantity;
                cout << quantity << "  NUTELLA_COOKIE added to the cart." << endl;
                a.bill += quantity * 9000;
                cout << "YOUR BILL IS " << a.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;

        case '2':
            currentItemSelected = "MARBEL COOKIE";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (MARBEL_COOKIE[0] < a.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    MARBEL_COOKIE[i] = 200;
                }
            }

            if (MARBEL_COOKIE[0] >= quantity)
            {
                MARBEL_COOKIE[0] -= quantity;
                cout << quantity << " MARBEL_COOKIE added to the cart." << endl;
                a.bill += quantity * 7500;
                cout << "YOUR BILL IS " << a.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;

        default:
            cout << "Invalid choice." << endl;
            goto ROD;
        }
        }
    }
    else if (choice == 'D' || choice == 'd')
    {
    PROD:

        system("cls");
        cout << "\t\t\tDONUTS  DETAILS" << endl;
        cout << "\t\t[1] NUTELLA FILLED => PRICE 200" << endl;
        cout << "\t\t[2]  CARAMEL FILLED=> PRICE 200" << endl;
        cout << "\t\t[3]  UNFILLED NUTELLA TOPPED => PRICE 200" << endl;
        cout << "\t\t[4] UNFILLED CARAMEL TOPPED => PRICE 200" << endl;
        cout << endl;
        cout << "\t\t ENTER YOUR CHOICE" << endl;
        cin >> item;
        string currentItemSelected;
        a.bill = 0;
        switch (item)
        {
        case '1':
        {

            currentItemSelected = " NUTELLA_FILLED";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (NUTELLA_FILLED_DONUTS[0] < a.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    NUTELLA_FILLED_DONUTS[i] = 200;
                }
            }

            if (NUTELLA_FILLED_DONUTS[0] >= quantity)
            {
                NUTELLA_FILLED_DONUTS[0] -= quantity;
                cout << quantity << " NUTELLA_FILLED donuts added to the cart." << endl;
                a.bill += quantity * 9000;
                cout << "YOUR BILL IS " << a.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;

        case '2':
            currentItemSelected = "CARAMEL_FILLED";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (CARAMEL_FILLED[0] < a.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    CARAMEL_FILLED[i] = 200;
                }
            }

            if (CARAMEL_FILLED[0] >= quantity)
            {
                CARAMEL_FILLED[0] -= quantity;
                cout << quantity << " CARAMEL_FILLED donuts added to the cart." << endl;
                a.bill += quantity * 7500;
                cout << "YOUR BILL IS " << a.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '3':
            currentItemSelected = "UNFILLED_NUTELLA_TOPPED";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (UNFILLED_NUTELLA_TOPPED[0] < a.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    UNFILLED_NUTELLA_TOPPED[i] = 200;
                }
            }

            if (UNFILLED_NUTELLA_TOPPED[0] >= quantity)
            {
                UNFILLED_NUTELLA_TOPPED[0] -= quantity;
                cout << quantity << " UNFILLED_NUTELLA_TOPPED donuts added to the cart." << endl;
                a.bill += quantity * 7000;
                cout << "YOUR BILL IS " << a.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '4':
            currentItemSelected = "UNFILLED_CARAMEL_TOPPED";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (UNFILLED_CARAMEL_TOPPED[0] < a.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    UNFILLED_CARAMEL_TOPPED[i] = 200;
                }
            }

            if (UNFILLED_CARAMEL_TOPPED[0] >= quantity)
            {
                UNFILLED_CARAMEL_TOPPED[0] -= quantity;
                cout << quantity << " UNFILLED_CARAMEL_TOPPED donuts added to the cart." << endl;
                a.bill += quantity * 7000;
                cout << "YOUR BILL IS " << a.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;

        default:
            cout << "Invalid choice." << endl;
            goto PROD;
        }
        }
    }
    else if (choice == 'F' || choice == 'f')
    {
    xII:
        system("cls");
        cout << "\t\t\tfreashly baked items DETAILS" << endl;
        cout << "\t\t[1] BREAD => PRICE 300" << endl;
        cout << "\t\t[2]  CHICKEN FILLED BREAD=> PRICE 200" << endl;
        cout << "\t\t[3]  ARABIAN PIZZA => PRICE 250" << endl;

        cout << endl;
        cout << "\t\t ENTER YOUR CHOICE" << endl;
        cin >> item;
        string currentItemSelected;
        a.bill = 0;
        switch (item)
        {
        case '1':
        {

            currentItemSelected = "BREAD";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (BREAD[0] < a.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {

                    BREAD[i] = 200;
                }
            }

            if (BREAD[0] >= quantity)
            {
                BREAD[0] -= quantity;
                cout << quantity << "BREAD added to the cart." << endl;
                a.bill += quantity * 300;
                cout << "YOUR BILL IS " << a.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;

        case '2':
            currentItemSelected = "CHICKEN_FILLED_BREAD";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (CHICKEN_FILLED_BREAD[0] < a.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    CHICKEN_FILLED_BREAD[i] = 200;
                }
            }

            if (CHICKEN_FILLED_BREAD[0] >= quantity)
            {
                CHICKEN_FILLED_BREAD[0] -= quantity;
                cout << quantity << " CHICKEN_FILLED_BREAD added to the cart." << endl;
                a.bill += quantity * 200;
                cout << "YOUR BILL IS " << a.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '3':
            currentItemSelected = "ARABIAN_PIZZA";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (ARABIAN_PIZZA[0] < a.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    ARABIAN_PIZZA[i] = 200;
                }
            }

            if (ARABIAN_PIZZA[0] >= quantity)
            {
                ARABIAN_PIZZA[0] -= quantity;
                cout << quantity << " ARABIAN_PIZZA added to the cart." << endl;
                a.bill += quantity * 7000;
                cout << "YOUR BILL IS " << a.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;

        default:
            cout << "Invalid choice." << endl;
            goto xII;
        }
        }
    }
    else
    {
        cout << "invalid choice" << endl;
    }
}
