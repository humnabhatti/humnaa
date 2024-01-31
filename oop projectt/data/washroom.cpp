#include "data_header.h"

using namespace std;

washroom::washroom()
{
    for (int i = 0; i < 200; ++i)
    {
        COLGATE[i] = 10;
        SENSODYNE[i] = 20;
        MEDICAM[i] = 30;
        AQUAFRESH[i] = 40;
        TIDE[i] = 10;
        PERSIL[i] = 20;
        GAIN[i] = 30;
        ARIEL[i] = 40;
        DOVE[i] = 10;
        PALMOLIVE[i] = 20;
        SAFEGUARD[i] = 30;
        LUX[i] = 40;
        VINCE[i] = 10;
        GOLDENPEARL[i] = 20;
        POUNDS[i] = 30;
        CARE[i] = 40;
    }
}
void washroom::viewTOOTHPASTE(char item)
{
    cout << "Details of TOOTHPASTE ITEMS" << endl;
    switch (item)
    {

    case '1':

        cout << "COLGATE"
             << ": PRICE"
             << "580" << endl;
        break;
    case '2':

        cout << "SENSODYNE "
             << ": PRICE"
             << "450" << endl;
        break;
    case '3':

        cout << "MEDICAM "
             << ": PRICE"
             << "400" << endl;
        break;
    case '4':

        cout << "AQUAFRESH "
             << ": PRICE"
             << "370" << endl;
        break;
    default:
        cout << "Invalid item!" << endl;
        break;
    }
}
void washroom::viewDETERGENT(char item)
{
    cout << "Details of DETERGENT ITEMS" << endl;
    switch (item)
    {

    case '1':

        cout << "TIDE"
             << ": PRICE"
             << "2000" << endl;
        break;
    case '2':

        cout << "PERSIL "
             << ": PRICE"
             << "2500" << endl;
        break;
    case '3':

        cout << "GAIN "
             << ": PRICE"
             << "2200" << endl;
        break;
    case '4':

        cout << "ARIEL "
             << ": PRICE"
             << "1500" << endl;
        break;
    default:
        cout << "Invalid item!" << endl;
        break;
    }
}
void washroom::viewSOAP(char item)
{
    cout << "Details of SOAP ITEMS" << endl;
    switch (item)
    {

    case '1':

        cout << "DOVE"
             << ": PRICE"
             << "500" << endl;
        break;
    case '2':

        cout << "PALMOLIVE "
             << ": PRICE"
             << "400" << endl;
        break;
    case '3':

        cout << "SAFEGUARD "
             << ": PRICE"
             << "370" << endl;
        break;
    case '4':

        cout << "LUX "
             << ": PRICE"
             << "560" << endl;
        break;
    default:
        cout << "Invalid item!" << endl;
        break;
    }
}
void washroom::viewFACEWASH(char item)
{
    cout << "Details of FACEWASHITEMS" << endl;
    switch (item)
    {

    case '1':

        cout << "VINCE"
             << ": PRICE"
             << "2000" << endl;
        break;
    case '2':

        cout << "GOLDENPEARL "
             << ": PRICE"
             << "2500" << endl;
        break;
    case '3':

        cout << "POUNDS "
             << ": PRICE"
             << "2200" << endl;
        break;
    case '4':

        cout << "CARE "
             << ": PRICE"
             << "1500" << endl;
        break;
    default:
        cout << "Invalid item!" << endl;
        break;
    }
}
void washroom::washroom_equipments()
{
    char choice;
    int item, quantity;
    Shoppingcart s;
    cout << "\t\t\t\tWELCOME TO HOUSEHOLD EQUIPMENT CENTER" << endl;
    cout << "\t\t\t\tFOLLOW THESE INSTRUCTION" << endl;
    cout << "ENTER T FOR TOOTHPASTE" << endl;
    cout << "ENTER D FOR DETERGENT" << endl;
    cout << "ENTER S FOR SOAP" << endl;
    cout << "ENTER F FOR FACEWASH" << endl;
    cin >> choice;
    if (choice == 't' || choice == 'T')
    {
    x:
        system("cls");
        cout << "\t\t\tTOOTHPASTE DETAILS" << endl;
        cout << "\t\t[1] COLGATE/75ml => PRICE 580" << endl;
        cout << "\t\t[2] SENSODYNE/75ml => PRICE 450" << endl;
        cout << "\t\t[3] MEDICAM/75ml => PRICE 400" << endl;
        cout << "\t\t[4] AQUAFRESH/1kg=> PRICE 370" << endl;
        cout << endl;
        cout << "\t\t ENTER YOUR CHOICE" << endl;
        cin >> item;
        string currentItemSelected;
        s.bill = 0;
        switch (item)
        {
        case 1:

            currentItemSelected = "COLGATE";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (COLGATE[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    COLGATE[i] = 200;
                }
            }

            if (COLGATE[0] >= quantity)
            {
                COLGATE[0] -= quantity;
                cout << quantity << " COLGATE TOOTHPASTE added to the cart." << endl;
                s.bill += quantity * 580;
                cout << "YOUR BILL IS " << s.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;

        case 2:
            currentItemSelected = "SENSODYNE";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (SENSODYNE[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    SENSODYNE[i] = 200;
                }
            }

            if (SENSODYNE[0] >= quantity)
            {
                SENSODYNE[0] -= quantity;
                cout << quantity << " SENSODYNE TOOTHPASTE added to the cart." << endl;
                s.bill += quantity * 450;
                cout << "YOUR BILL IS " << s.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case 3:
            currentItemSelected = "MEDICAM";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (MEDICAM[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    MEDICAM[i] = 200;
                }
            }

            if (MEDICAM[0] >= quantity)
            {
                MEDICAM[0] -= quantity;
                cout << quantity << " MEDICAM TOOTHPASTE added to the cart." << endl;
                s.bill += quantity * 400;
                cout << "YOUR BILL IS " << s.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case 4:
            currentItemSelected = "AQUAFRESH";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (AQUAFRESH[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    AQUAFRESH[i] = 200;
                }
            }

            if (AQUAFRESH[0] >= quantity)
            {
                AQUAFRESH[0] -= quantity;
                cout << quantity << " AQUAFRESH TOOTHPASTE added to the cart." << endl;
                s.bill += quantity * 370;
                cout << "YOUR BILL IS " << s.bill << endl;
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
            cout << "________________________________" << endl;
            cout << "|     YOUR BILL               |" << endl;
            cout << "| Total: " << s.bill << " \t\t      |" << endl;
            cout << "| " << s.currentItemSelected << " |" << endl;
            cout << "|                             |" << endl;
            cout << "|        THANK YOU            |" << endl;
            cout << "|______________________________|" << endl;
            s.addToBill(s.currentItemSelected, s.bill, quantity);
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

                s.addToCart(s.currentItemSelected, s.bill, quantity);
                cout << "DO YOU WANT TO LOOK INTO CART /press 1" << endl;
                cin >> a;
                if (a == 1)
                {
                    s.displayCartItemsFromFile();
                    s.calculateTotal();
                    cout << "Do you want to delete an item from the cart? (y/n): ";
                    char deleteChoice;
                    cin >> deleteChoice;

                    if (deleteChoice == 'y' || deleteChoice == 'Y')
                    {
                        int deleteIndex;
                        cout << "Enter the index of the item you want to delete: ";
                        cin >> deleteIndex;

                        s.deleteCartItem(deleteIndex - 1);
                        s.displayCartItemsFromFile();
                        s.calculateTotal();
                    }
                    else
                    {

                        cout << "Proceeding with other actions or ending the process..." << endl;
                    }
                }

                break;
            case 2:
                s.addTowishlist(s.currentItemSelected, s.bill, quantity);
                cout << "Item added to wishlist!" << endl;
                cout << "DO YOU WANT TO LOOK INTO WISHLIST/press 1" << endl;
                cin >> a;
                if (a == 1)
                {
                    s.displaywishlistFromFile();
                }
                break;
            case 3:

                viewTOOTHPASTE(item);
                break;
            }
        }
    }

    else if (choice == 'd' || choice == 'D')
    {
    y:
        system("cls");
        cout << "\t\t\t DETERGENT DETAILS" << endl;
        cout << "\t\t[1] TIDE/1KG => PRICE 2,000" << endl;
        cout << "\t\t[2] PERSIL/1KG=> PRICE 2,500" << endl;
        cout << "\t\t[3]  GAIN/1KG => PRICE 2,200" << endl;
        cout << "\t\t[4] ARIEL/1KG=> PRICE 1,500" << endl;
        cout << endl;
        cout << "\t\t ENTER YOUR CHOICE" << endl;
        cin >> item;

        switch (item)
        {
        case 1:
            s.currentItemSelected = "TIDE ";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (TIDE[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    TIDE[i] = 200;
                }
            }

            if (TIDE[0] >= quantity)
            {
                TIDE[0] -= quantity;
                cout << quantity << " TIDE DETERGENT added to the cart." << endl;
                s.bill += quantity * 2000;
                cout << "YOUR BILL IS " << s.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case 2:
            s.currentItemSelected = "PERSIL";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (PERSIL[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    PERSIL[i] = 200;
                }
            }

            if (PERSIL[0] >= quantity)
            {
                PERSIL[0] -= quantity;
                cout << quantity << " PERSIL DETERGENT added to the cart." << endl;
                s.bill += quantity * 2500;
                cout << "YOUR BILL IS " << s.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case 3:
            s.currentItemSelected = "GAIN";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (GAIN[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    GAIN[i] = 200;
                }
            }

            if (GAIN[0] >= quantity)
            {
                GAIN[0] -= quantity;
                cout << quantity << " GAIN DETERGENT added to the cart." << endl;
                s.bill += quantity * 2200;
                cout << "YOUR BILL IS " << s.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case 4:
            s.currentItemSelected = "ARIEL";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (ARIEL[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    ARIEL[i] = 200;
                }
            }

            if (ARIEL[0] >= quantity)
            {
                ARIEL[0] -= quantity;
                cout << quantity << " ARIEL DETERGENT added to the cart." << endl;
                s.bill += quantity * 1500;
                cout << "YOUR BILL IS " << s.bill << endl;
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
            cout << "______________________________" << endl;
            cout << "|     YOUR BILL               |" << endl;
            cout << "| Total: " << s.bill << " \t\t      |" << endl;
            cout << "| " << s.currentItemSelected << " |" << endl;
            cout << "|                             |" << endl;
            cout << "|        THANK YOU            |" << endl;
            cout << "|_____________________________|" << endl;
            s.addToBill(s.currentItemSelected, s.bill, quantity);
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

                s.addToCart(s.currentItemSelected, s.bill, quantity);
                cout << "DO YOU WANT TO LOOK INTO CART /press 1" << endl;
                cin >> a;
                if (a == 1)
                {
                    s.displayCartItemsFromFile();
                    s.calculateTotal();
                    cout << "Do you want to delete an item from the cart? (y/n): ";
                    char deleteChoice;
                    cin >> deleteChoice;

                    if (deleteChoice == 'y' || deleteChoice == 'Y')
                    {
                        int deleteIndex;
                        cout << "Enter the index of the item you want to delete: ";
                        cin >> deleteIndex;
                        s.deleteCartItem(deleteIndex - 1);
                        s.displayCartItemsFromFile();
                        s.calculateTotal();
                    }
                    else
                    {

                        cout << "Proceeding with other actions or ending the process..." << endl;
                    }
                }

                break;
            case 2:
                s.addTowishlist(s.currentItemSelected, s.bill, quantity);
                cout << "Item added to wishlist!" << endl;
                cout << "DO YOU WANT TO LOOK INTO WISHLIST/press 1" << endl;
                cin >> a;
                if (a == 1)
                {
                    s.displaywishlistFromFile();
                }
                break;
            case 3:

                viewDETERGENT(item);
                break;
            }
        }
    }
    else if (choice == 's' || choice == 'S')
    {
    h:
        system("cls");
        cout << "\t\t\t SOAP DETAILS" << endl;
        cout << "\t\t[1] DOVE/100g => PRICE 500" << endl;
        cout << "\t\t[2] PALMOLIVE/100g=> PRICE 400" << endl;
        cout << "\t\t[3] SAFEGUARD/100g => PRICE 370" << endl;
        cout << "\t\t[4] LUX/100g=> PRICE 560" << endl;
        cout << endl;
        cout << "\t\t ENTER YOUR CHOICE" << endl;
        cin >> item;

        switch (item)
        {
        case 1:
            s.currentItemSelected = "DOVE ";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (DOVE[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    DOVE[i] = 200;
                }
            }

            if (DOVE[0] >= quantity)
            {
                DOVE[0] -= quantity;
                cout << quantity << " DOVE SOAP added to the cart." << endl;
                s.bill += quantity * 500;
                cout << "YOUR BILL IS " << s.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case 2:
            s.currentItemSelected = "PALMOLIVE";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (PALMOLIVE[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    PALMOLIVE[i] = 200;
                }
            }

            if (PALMOLIVE[0] >= quantity)
            {
                PALMOLIVE[0] -= quantity;
                {
                    cout << quantity << "PALMOLIVE SOAP added to the cart." << endl;
                    s.bill += quantity * 400;
                    cout << "YOUR BILL IS " << s.bill << endl;
                }
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case 3:
            s.currentItemSelected = "SAFEGUARD";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (SAFEGUARD[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    SAFEGUARD[i] = 200;
                }
            }

            if (SAFEGUARD[0] >= quantity)
            {
                SAFEGUARD[0] -= quantity;
                cout << quantity << " SAFEGUARD SOAP added to the cart." << endl;
                s.bill += quantity * 370;
                cout << "YOUR BILL IS " << s.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case 4:
            s.currentItemSelected = "LUX";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (LUX[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    LUX[i] = 200;
                }
            }

            if (LUX[0] >= quantity)
            {
                LUX[0] -= quantity;
                cout << quantity << "LUX SOAP added to the cart." << endl;
                s.bill += quantity * 560;
                cout << "YOUR BILL IS " << s.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        default:
            cout << "Invalid choice." << endl;
            goto h;
        }
        cout << "Do you want to buy now? (y/n): ";
        char buyChoice;
        cin >> buyChoice;

        if (buyChoice == 'y' || buyChoice == 'Y')
        {
            cout << "Items bought successfully!" << endl;
            cout << "______________________________" << endl;
            cout << "|     YOUR BILL               |" << endl;
            cout << "| Total: " << s.bill << " \t\t      |" << endl;
            cout << "| " << s.currentItemSelected << " |" << endl;
            cout << "|                             |" << endl;
            cout << "|        THANK YOU            |" << endl;
            cout << "|_____________________________|" << endl;
            s.addToBill(s.currentItemSelected, s.bill, quantity);
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

                s.addToCart(s.currentItemSelected, s.bill, quantity);
                cout << "DO YOU WANT TO LOOK INTO CART /press 1" << endl;
                cin >> a;
                if (a == 1)
                {
                    s.displayCartItemsFromFile();
                    s.calculateTotal();
                    cout << "Do you want to delete an item from the cart? (y/n): ";
                    char deleteChoice;
                    cin >> deleteChoice;

                    if (deleteChoice == 'y' || deleteChoice == 'Y')
                    {
                        int deleteIndex;
                        cout << "Enter the index of the item you want to delete: ";
                        cin >> deleteIndex;
                        s.deleteCartItem(deleteIndex - 1);
                        s.displayCartItemsFromFile();
                        s.calculateTotal();
                    }
                    else
                    {

                        cout << "Proceeding with other actions or ending the process..." << endl;
                    }
                }

                break;
            case 2:
                s.addTowishlist(s.currentItemSelected, s.bill, quantity);
                cout << "Item added to wishlist!" << endl;
                cout << "DO YOU WANT TO LOOK INTO WISHLIST/press 1" << endl;
                cin >> a;
                if (a == 1)
                {
                    s.displaywishlistFromFile();
                }
                break;
            case 3:

                viewSOAP(item);
                break;
            }
        }
    }
    else if (choice == 'f' || choice == 'F')
    {
    l:
        system("cls");
        cout << "\t\t\t FACE WASH DETAILS" << endl;
        cout << "\t\t[1] VINCE/100ml => PRICE 2,000" << endl;
        cout << "\t\t[2] GOLDENPEARL/100ml=> PRICE 2,500" << endl;
        cout << "\t\t[3] POUNDS/100ml => PRICE 2,200" << endl;
        cout << "\t\t[4] CARE /100ml=> PRICE 1,500" << endl;
        cout << endl;
        cout << "\t\t ENTER YOUR CHOICE" << endl;
        cin >> item;

        switch (item)
        {
        case 1:
            s.currentItemSelected = " VINCE ";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (VINCE[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    VINCE[i] = 200;
                }
            }

            if (VINCE[0] >= quantity)
            {
                VINCE[0] -= quantity;
                cout << quantity << " VINCE FACEWASH added to the cart." << endl;
                s.bill += quantity * 2000;
                cout << "YOUR BILL IS " << s.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case 2:
            s.currentItemSelected = "GOLDENPEARL";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (GOLDENPEARL[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    GOLDENPEARL[i] = 200;
                }
            }

            if (GOLDENPEARL[0] >= quantity)
            {
                GOLDENPEARL[0] -= quantity;
                cout << quantity << " GOLDENPEARL FACEWASH added to the cart." << endl;
                s.bill += quantity * 2500;
                cout << "YOUR BILL IS " << s.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case 3:
            s.currentItemSelected = "POUNDS";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (POUNDS[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    POUNDS[i] = 200;
                }
            }

            if (POUNDS[0] >= quantity)
            {
                POUNDS[0] -= quantity;
                cout << quantity << " POUNDS FACEWASH added to the cart." << endl;
                s.bill += quantity * 2200;
                cout << "YOUR BILL IS " << s.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case 4:
            s.currentItemSelected = "CARE";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (CARE[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    CARE[i] = 200;
                }
            }

            if (CARE[0] >= quantity)
            {
                CARE[0] -= quantity;
                cout << quantity << "CARE FACEWASH added to the cart." << endl;
                s.bill += quantity * 1500;
                cout << "YOUR BILL IS " << s.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        default:
            cout << "Invalid choice." << endl;
            goto l;
        }
        cout << "Do you want to buy now? (y/n): ";
        char buyChoice;
        cin >> buyChoice;

        if (buyChoice == 'y' || buyChoice == 'Y')
        {
            cout << "Items bought successfully!" << endl;
            cout << "_____" << endl;
            cout << "|     YOUR BILL               |" << endl;
            cout << "| Total: " << s.bill << " \t\t      |" << endl;
            cout << "| " << s.currentItemSelected << " |" << endl;
            cout << "|                             |" << endl;
            cout << "|        THANK YOU            |" << endl;
            cout << "|_____|" << endl;
            s.addToBill(s.currentItemSelected, s.bill, quantity);
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

                s.addToCart(s.currentItemSelected, s.bill, quantity);
                cout << "DO YOU WANT TO LOOK INTO CART /press 1" << endl;
                cin >> a;
                if (a == 1)
                {
                    s.displayCartItemsFromFile();
                    s.calculateTotal();
                    cout << "Do you want to delete an item from the cart? (y/n): ";
                    char deleteChoice;
                    cin >> deleteChoice;

                    if (deleteChoice == 'y' || deleteChoice == 'Y')
                    {
                        int deleteIndex;
                        cout << "Enter the index of the item you want to delete: ";
                        cin >> deleteIndex;
                        s.deleteCartItem(deleteIndex - 1);
                        s.displayCartItemsFromFile();
                        s.calculateTotal();
                    }
                    else
                    {

                        cout << "Proceeding with other actions or ending the process..." << endl;
                    }
                }

                break;
            case 2:
                s.addTowishlist(s.currentItemSelected, s.bill, quantity);
                cout << "Item added to wishlist!" << endl;
                cout << "DO YOU WANT TO LOOK INTO WISHLIST/press 1" << endl;
                cin >> a;
                if (a == 1)
                {
                    s.displaywishlistFromFile();
                }
                break;
            case 3:

                viewFACEWASH(item);
                break;
            }
        }
    }
}
