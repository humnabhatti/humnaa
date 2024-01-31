#include "data_header.h"

using namespace std;
void makeover::viewFOUNDATION(char item)
{
    switch (item)
    {
    case '1':
        cout << "Details of DIOR DETAIL:" << endl;
        cout << "DIOR"
             << ": PRICE"
             << "9000" << endl;
        break;
    case '2':
        cout << "Details of FIT ME:" << endl;
        cout << " FIT ME"
             << ": PRICE"
             << "7500" << endl;
        break;
    case '3':
        cout << "Details of HUDA BEAUTY:" << endl;
        cout << "HUDA BEAUTY "
             << ": PRICE"
             << "7000" << endl;
        break;
    case '4':
        cout << "Details of LAKME :" << endl;
        cout << "LAKME "
             << ": PRICE"
             << "7000" << endl;
        break;
    default:
        cout << "Invalid item!" << endl;
        break;
    }
}
void makeover::viewLIPSTICK(char item)
{
    switch (item)
    {
    case '1':
        cout << "Details of MEDORA:" << endl;
        cout << "MEDORA"
             << ": PRICE"
             << "9000" << endl;
        break;
    case '2':
        cout << "Details of MAC:" << endl;
        cout << "MAC "
             << ": PRICE"
             << "7500" << endl;
        break;
    case '3':
        cout << "Details of LAKME:" << endl;
        cout << "LAKME "
             << ": PRICE"
             << "7000" << endl;
        break;
    case '4':
        cout << "Details of MAYBELLINE:" << endl;
        cout << "MAYBELLINE "
             << ": PRICE"
             << "7000" << endl;
        break;
    default:
        cout << "Invalid item!" << endl;
        break;
    }
}
void makeover::viewNAILPOLISH(char item)
{
    switch (item)
    {
    case '1':
        cout << "Details of RED NAIL POLISH:" << endl;
        cout << "RED NAIL POLISH"
             << ": PRICE"
             << "500" << endl;
        break;
    case '2':
        cout << "Details of YELLOW NAIL POLISH:" << endl;
        cout << "YELLOW NAIL POLISH "
             << ": PRICE"
             << "500" << endl;
        break;
    case '3':
        cout << "Details of BLACK NAIL POLISH:" << endl;
        cout << "BLACK NAIL POLISH "
             << ": PRICE"
             << "500" << endl;
        break;
    case '4':
        cout << "Details of PINK NAIL POLISH:" << endl;
        cout << "PINK NAIL POLISH "
             << ": PRICE"
             << "500" << endl;
        break;
    default:
        cout << "Invalid item!" << endl;
        break;
    }
}
void makeover::viewBLUSHON(char item)
{
    switch (item)
    {
    case '1':
        cout << "Details of MAYBELLINE:" << endl;
        cout << "MAYBELLINE"
             << ": PRICE"
             << "1,500" << endl;
        break;
    case '2':
        cout << "Details of HUDA BEAUTY:" << endl;
        cout << "HUDA BEAUTY"
             << ": PRICE"
             << "1,500" << endl;
        break;
    case '3':
        cout << "Details of RARE BEAUTY:" << endl;
        cout << "RARE BEAUTY "
             << ": PRICE"
             << "2,500" << endl;
        break;
    case '4':
        cout << "Details of KYLIE:" << endl;
        cout << "KYLIE "
             << ": PRICE"
             << "3,500" << endl;
        break;
    default:
        cout << "Invalid item!" << endl;
        break;
    }
}
void makeover::viewHIGHLIGHTER(char item)
{
    switch (item)
    {
    case '1':
        cout << "Details of MAYBELLINE BLUSH ON:" << endl;
        cout << "MAYBELLINE"
             << ": PRICE"
             << "1,500" << endl;
        break;
    case '2':
        cout << "Details of HUDA BEAUTY BLUSH ON:" << endl;
        cout << "HUDA BEAUTY "
             << ": PRICE"
             << "1,500" << endl;
        break;
    case '3':
        cout << "Details of RARE BEAUTY BLUSH ON:" << endl;
        cout << "RARE BEAUTY "
             << ": PRICE"
             << "2,500" << endl;
        break;
    case '4':
        cout << "Details of KYLIE BLUSH ON:" << endl;
        cout << "KYLIE "
             << ": PRICE"
             << "3,500" << endl;
        break;
    default:
        cout << "Invalid item!" << endl;
        break;
    }
}
makeover::makeover()
{
    for (int i = 0; i < 200; ++i)
    {
        DIOR[i] = 200;
        FIT_ME[i] = 200;
        HUDA_BEAUTY[i] = 200;
        LAKME[i] = 200;
        MEDORA[i] = 200;
        MAC_LIPSTICKS[i] = 200;
        LAKME_LIPSTICKS[i] = 200;
        MAYBELLINE[i] = 200;
        RED[i] = 200;
        YELLOW[i] = 200;
        BLACK[i] = 200;
        PINK[i] = 200;
        MAYBELLINE_BLUSH_ON[i] = 200;
        HUDA_BEAUTY_BLUSH_ON[i] = 200;
        RARE_BEAUTY[i] = 200;
        KYLIE[i] = 200;
        MAYBELLINE_HIGHLIGHTERS[i] = 200;
        HUDA_BEAUTY_HIGHLIGHTERS[i] = 200;
        RAREBEAUTY_HIGHLIGHTERS[i] = 200;
        KYLIE_HIGHLIGHTERS[i] = 200;
    }
}
void makeover::makeup()
{
    char choice;
    char item;
    int quantity;
    Shoppingcart t;
    cout << "\t\t\t\tWELCOME TO MAKEUP CENTER" << endl;
    cout << "\t\t\t\tFOLLOW THESE INSTRUCTION" << endl;
    cout << "ENTER F FOR FOUNDATION" << endl;
    cout << "ENTER L FOR LIPSTICK" << endl;
    cout << "ENTER N FOR NAIL POLISH" << endl;
    cout << "ENTER B FOR BLUSH ON" << endl;
    cout << "ENTER H FOR HIGHLIGHTER" << endl;
    cin >> choice;
    if (choice == 'f' || choice == 'F')
    {
    x:

        system("cls");
        cout << "\t\t\t FOUNDATION DETAILS" << endl;
        cout << "\t\t[1] DIOR => PRICE 9,000" << endl;
        cout << "\t\t[2] FIT ME => PRICE 7,500" << endl;
        cout << "\t\t[3] HUDA BEAUTY => PRICE 7,000" << endl;
        cout << "\t\t[4] LAKME => PRICE 7,000" << endl;
        cout << endl;
        cout << "\t\t ENTER YOUR CHOICE" << endl;
        cin >> item;
        string currentItemSelected;
        t.bill = 0;
        switch (item)
        {
        case '1':
            currentItemSelected = "DIOR";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (DIOR[0] < t.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    DIOR[i] = 200;
                }
            }

            if (DIOR[0] >= quantity)
            {
                DIOR[0] -= quantity;
                cout << quantity << " DIOR FOUNDATION added to the cart." << endl;
                t.bill += quantity * 9000;
                cout << "YOUR BILL IS " << t.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '2':
            currentItemSelected = "FIT_ME";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (FIT_ME[0] < t.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    FIT_ME[i] = 200;
                }
            }

            if (FIT_ME[0] >= quantity)
            {
                FIT_ME[0] -= quantity;
                cout << quantity << " FIT ME FOUNDATION added to the cart." << endl;
                t.bill += quantity * 7500;
                cout << "YOUR BILL IS " << t.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '3':
            currentItemSelected = "HUDA_BEAUTY";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (HUDA_BEAUTY[0] < t.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    HUDA_BEAUTY[i] = 200;
                }
            }

            if (HUDA_BEAUTY[0] >= quantity)
            {
                HUDA_BEAUTY[0] -= quantity;
                cout << quantity << " HUDA_BEAUTY added to the cart." << endl;
                t.bill += quantity * 7000;
                cout << "YOUR BILL IS " << t.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '4':
            currentItemSelected = "LAKME";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (LAKME[0] < t.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    LAKME[i] = 200;
                }
            }

            if (LAKME[0] >= quantity)
            {
                LAKME[0] -= quantity;
                cout << quantity << " LAKME FOUNDATION added to the cart." << endl;
                t.bill += quantity * 7000;
                cout << "YOUR BILL IS " << t.bill << endl;
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
            cout << "| Total: " << t.bill << " \t\t      |" << endl;
            cout << "| " << t.currentItemSelected << " |" << endl;
            cout << "|                             |" << endl;
            cout << "|        THANK YOU            |" << endl;
            cout << "|_____________________________|" << endl;

            t.addToBill(t.currentItemSelected, t.bill, quantity);
        }
        else
        {
            cout << "Select an option: " << endl;
            cout << "1. Add to Cart" << endl;
            cout << "2. Add to Wishlist" << endl;
            cout << "3. View Product Details" << endl;
            char userOption;
            cin >> userOption;
            switch (userOption)
            {

            case '1':
                int a;

                t.addToCart(t.currentItemSelected, t.bill, quantity);
                cout << "DO YOU WANT TO LOOK INTO CART /press 1" << endl;
                cin >> a;
                if (a == 1)
                {
                    t.displayCartItemsFromFile();
                    t.calculateTotal();
                    cout << "Do you want to delete an item from the cart? (y/n): ";
                    char deleteChoice;
                    cin >> deleteChoice;

                    if (deleteChoice == 'y' || deleteChoice == 'Y')
                    {
                        int deleteIndex;
                        cout << "Enter the index of the item you want to delete: ";
                        cin >> deleteIndex;
                        t.deleteCartItem(deleteIndex - 1);
                        t.displayCartItemsFromFile();
                        t.calculateTotal();
                    }
                    else
                    {

                        cout << "Proceeding with other actions or ending the process..." << endl;
                    }
                }

                break;
            case '2':
                t.addTowishlist(t.currentItemSelected, t.bill, quantity);
                cout << "Item added to wishlist!" << endl;
                cout << "DO YOU WANT TO LOOK INTO WISHLIST/press 1" << endl;
                cin >> a;
                if (a == 1)
                {
                    t.displaywishlistFromFile();
                }
                break;
            case '3':

                viewFOUNDATION(item);
                break;
            }
        }
    }
    else if (choice == 'l' || choice == 'L')
    {
    y:
        system("cls");
        cout << "\t\t\tLIPSTICK DETAILS" << endl;
        cout << "\t\t[1] MEDORA => PRICE 9,000" << endl;
        cout << "\t\t[2]   MAC_LIPSTICKS  => PRICE 7,500" << endl;
        cout << "\t\t[3]  LAKME => PRICE 7,000" << endl;
        cout << "\t\t[4] MAYBELLINE=> PRICE 7,000" << endl;
        cout << endl;
        cout << "\t\t ENTER YOUR CHOICE" << endl;
        cin >> item;
        switch (item)
        {
        case '1':
            t.currentItemSelected = "MEDORA ";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (MEDORA[0] < t.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    MEDORA[i] = 200;
                }
            }

            if (MEDORA[0] >= quantity)
            {
                MEDORA[0] -= quantity;
                cout << quantity << " MEDORA lipstick added to the cart." << endl;
                t.bill += quantity * 2000;
                cout << "YOUR BILL IS " << t.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '2':
            t.currentItemSelected = "MAC_LIPSTICKS";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (MAC_LIPSTICKS[0] < t.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    MAC_LIPSTICKS[i] = 200;
                }
            }

            if (MAC_LIPSTICKS[0] >= quantity)
            {
                MAC_LIPSTICKS[0] -= quantity;
                cout << quantity << " MAC_LIPSTICKS added to the cart." << endl;
                t.bill += quantity * 2500;
                cout << "YOUR BILL IS " << t.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '3':
            t.currentItemSelected = "LAKME";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (LAKME[0] < t.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    LAKME[i] = 200;
                }
            }

            if (LAKME[0] >= quantity)
            {
                LAKME[0] -= quantity;
                cout << quantity << " LAKME lippstick added to the cart." << endl;
                t.bill += quantity * 2200;
                cout << "YOUR BILL IS " << t.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '4':
            t.currentItemSelected = "MAYBELLINE";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (MAYBELLINE[0] < t.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    MAYBELLINE[i] = 200;
                }
            }

            if (MAYBELLINE[0] >= quantity)
            {
                MAYBELLINE[0] -= quantity;
                cout << quantity << "MAYBELLINE lipstick added to the cart." << endl;
                t.bill += quantity * 1500;
                cout << "YOUR BILL IS " << t.bill << endl;
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
            cout << "| Total: " << t.bill << " \t\t      |" << endl;
            cout << "| " << t.currentItemSelected << " |" << endl;
            cout << "|                             |" << endl;
            cout << "|        THANK YOU            |" << endl;
            cout << "|_____________________________|" << endl;
            t.addToBill(t.currentItemSelected, t.bill, quantity);
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

            case '1':
                int a;

                t.addToCart(t.currentItemSelected, t.bill, quantity);
                cout << "DO YOU WANT TO LOOK INTO CART /press 1" << endl;
                cin >> a;
                if (a == 1)
                {
                    t.displayCartItemsFromFile();
                    t.calculateTotal();
                    cout << "Do you want to delete an item from the cart? (y/n): ";
                    char deleteChoice;
                    cin >> deleteChoice;

                    if (deleteChoice == 'y' || deleteChoice == 'Y')
                    {
                        int deleteIndex;
                        cout << "Enter the index of the item you want to delete: ";
                        cin >> deleteIndex;
                        t.deleteCartItem(deleteIndex - 1);
                        t.displayCartItemsFromFile();
                        t.calculateTotal();
                    }
                    else
                    {

                        cout << "Proceeding with other actions or ending the process..." << endl;
                    }
                }

                break;
            case '2':
                t.addTowishlist(t.currentItemSelected, t.bill, quantity);
                cout << "Item added to wishlist!" << endl;
                cout << "DO YOU WANT TO LOOK INTO WISHLIST/press 1" << endl;
                cin >> a;
                if (a == 1)
                {
                    t.displaywishlistFromFile();
                }
                break;
            case '3':

                viewLIPSTICK(item);
                break;
            }
        }
    }
    else if (choice == 'n' || choice == 'N')
    {
    NAILPROD:
        system("cls");
        cout << "\t\t\tNAIL POLISH DETAILS" << endl;
        cout << "\t\t[1] RED => PRICE 500" << endl;
        cout << "\t\t[2]  YELLOW=> PRICE 500" << endl;
        cout << "\t\t[3]  BLACK => PRICE 500" << endl;
        cout << "\t\t[4] PINK=> PRICE 500" << endl;
        cout << endl;
        cout << "\t\t ENTER YOUR CHOICE" << endl;
        cin >> item;
        switch (item)
        {
        case '1':
            t.currentItemSelected = "RED ";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (RED[0] < t.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    RED[i] = 200;
                }
            }

            if (RED[0] >= quantity)
            {
                RED[0] -= quantity;
                cout << quantity << " RED nail paint added to the cart." << endl;
                t.bill += quantity * 2000;
                cout << "YOUR BILL IS " << t.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '2':
            t.currentItemSelected = "YELLOW";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (YELLOW[0] < t.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    YELLOW[i] = 200;
                }
            }

            if (YELLOW[0] >= quantity)
            {
                YELLOW[0] -= quantity;
                {
                    cout << quantity << "YELLOW nail paint added to the cart." << endl;
                    t.bill += quantity * 2500;
                    cout << "YOUR BILL IS " << t.bill << endl;
                }
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '3':
            t.currentItemSelected = "BLACK";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (BLACK[0] < t.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    BLACK[i] = 200;
                }
            }

            if (BLACK[0] >= quantity)
            {
                BLACK[0] -= quantity;
                cout << quantity << " BLACK NAIL PAINT added to the cart." << endl;
                t.bill += quantity * 2200;
                cout << "YOUR BILL IS " << t.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '4':
            t.currentItemSelected = "PINK";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (PINK[0] < t.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    PINK[i] = 200;
                }
            }

            if (PINK[0] >= quantity)
            {
                PINK[0] -= quantity;
                cout << quantity << "PINK  NAIL PAINT added to the cart." << endl;
                t.bill += quantity * 1500;
                cout << "YOUR BILL IS " << t.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        default:
            cout << "Invalid choice." << endl;
            goto NAILPROD;
        }
        cout << "Do you want to buy now? (y/n): ";
        char buyChoice;
        cin >> buyChoice;

        if (buyChoice == 'y' || buyChoice == 'Y')
        {
            cout << "Items bought successfully!" << endl;
            cout << "_______________________________" << endl;
            cout << "|     YOUR BILL               |" << endl;
            cout << "| Total: " << t.bill << " \t\t      |" << endl;
            cout << "| " << t.currentItemSelected << " |" << endl;
            cout << "|                             |" << endl;
            cout << "|        THANK YOU            |" << endl;
            cout << "|_____________________________|" << endl;
            t.addToBill(t.currentItemSelected, t.bill, quantity);
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

            case '1':
                int a;

                t.addToCart(t.currentItemSelected, t.bill, quantity);
                cout << "DO YOU WANT TO LOOK INTO CART /press 1" << endl;
                cin >> a;
                if (a == 1)
                {
                    t.displayCartItemsFromFile();
                    t.calculateTotal();
                    cout << "Do you want to delete an item from the cart? (y/n): ";
                    char deleteChoice;
                    cin >> deleteChoice;

                    if (deleteChoice == 'y' || deleteChoice == 'Y')
                    {
                        int deleteIndex;
                        cout << "Enter the index of the item you want to delete: ";
                        cin >> deleteIndex;
                        t.deleteCartItem(deleteIndex - 1);
                        t.displayCartItemsFromFile();
                        t.calculateTotal();
                    }
                    else
                    {

                        cout << "Proceeding with other actions or ending the process..." << endl;
                    }
                }

                break;
            case '2':
                t.addTowishlist(t.currentItemSelected, t.bill, quantity);
                cout << "Item added to wishlist!" << endl;
                cout << "DO YOU WANT TO LOOK INTO WISHLIST/press 1" << endl;
                cin >> a;
                if (a == 1)
                {
                    t.displaywishlistFromFile();
                }
                break;
            case '3':

                viewNAILPOLISH(item);
                break;
            }
        }
    }
    else if (choice == 'b' || choice == 'B')
    {
    j:

        system("cls");
        cout << "\t\t\tBLUSH ON DETAILS" << endl;
        cout << "\t\t[1]  MAYBELLINE_BLUSH_ON => PRICE 1,500" << endl;
        cout << "\t\t[2]  HUDA_BEAUTY_BLUSH_ON=> PRICE 1,500" << endl;
        cout << "\t\t[3]  RARE_BEAUTY => PRICE 2,500" << endl;
        cout << "\t\t[4] KYLIE => PRICE 3,500" << endl;
        cout << endl;
        cout << "\t\t ENTER YOUR CHOICE" << endl;
        cin >> item;
        switch (item)
        {
        case '1':
            t.currentItemSelected = "MAYBELLINE_BLUSH_ON ";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (MAYBELLINE_BLUSH_ON[0] < t.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    MAYBELLINE_BLUSH_ON[i] = 200;
                }
            }

            if (MAYBELLINE_BLUSH_ON[0] >= quantity)
            {
                MAYBELLINE_BLUSH_ON[0] -= quantity;
                cout << quantity << " MAYBELLINE_BLUSH_ON added to the cart." << endl;
                t.bill += quantity * 2000;
                cout << "YOUR BILL IS " << t.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '2':
            t.currentItemSelected = "HUDA_BEAUTY_BLUSH_ON";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (HUDA_BEAUTY_BLUSH_ON[0] < t.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    HUDA_BEAUTY_BLUSH_ON[i] = 200;
                }
            }

            if (HUDA_BEAUTY_BLUSH_ON[0] >= quantity)
            {
                HUDA_BEAUTY_BLUSH_ON[0] -= quantity;
                {
                    cout << quantity << "HUDA_BEAUTY_BLUSH_ON added to the cart." << endl;
                    t.bill += quantity * 2500;
                    cout << "YOUR BILL IS " << t.bill << endl;
                }
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '3':
            t.currentItemSelected = "RARE_BEAUTY";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (RARE_BEAUTY[0] < t.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    RARE_BEAUTY[i] = 200;
                }
            }

            if (RARE_BEAUTY[0] >= quantity)
            {
                RARE_BEAUTY[0] -= quantity;
                cout << quantity << " RARE_BEAUTY added to the cart." << endl;
                t.bill += quantity * 2200;
                cout << "YOUR BILL IS " << t.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '4':
            t.currentItemSelected = "KYLIE";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (KYLIE[0] < t.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    KYLIE[i] = 200;
                }
            }

            if (KYLIE[0] >= quantity)
            {
                KYLIE[0] -= quantity;
                cout << quantity << "KYLIE BLUSH ON added to the cart." << endl;
                t.bill += quantity * 1500;
                cout << "YOUR BILL IS " << t.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        default:
            cout << "Invalid choice." << endl;
            goto j;
        }
        cout << "Do you want to buy now? (y/n): ";
        char buyChoice;
        cin >> buyChoice;

        if (buyChoice == 'y' || buyChoice == 'Y')
        {
            cout << "Items bought successfully!" << endl;
            cout << "_______________________________" << endl;
            cout << "|     YOUR BILL               |" << endl;
            cout << "| Total: " << t.bill << " \t\t      |" << endl;
            cout << "| " << t.currentItemSelected << " |" << endl;
            cout << "|                             |" << endl;
            cout << "|        THANK YOU            |" << endl;
            cout << "|_____________________________|" << endl;
            t.addToBill(t.currentItemSelected, t.bill, quantity);
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

            case '1':
                int a;

                t.addToCart(t.currentItemSelected, t.bill, quantity);
                cout << "DO YOU WANT TO LOOK INTO CART /press 1" << endl;
                cin >> a;
                if (a == 1)
                {
                    t.displayCartItemsFromFile();
                    t.calculateTotal();
                    cout << "Do you want to delete an item from the cart? (y/n): ";
                    char deleteChoice;
                    cin >> deleteChoice;

                    if (deleteChoice == 'y' || deleteChoice == 'Y')
                    {
                        int deleteIndex;
                        cout << "Enter the index of the item you want to delete: ";
                        cin >> deleteIndex;
                        t.deleteCartItem(deleteIndex - 1);
                        t.displayCartItemsFromFile();
                        t.calculateTotal();
                    }
                    else
                    {

                        cout << "Proceeding with other actions or ending the process..." << endl;
                    }
                }

                break;
            case '2':
                t.addTowishlist(t.currentItemSelected, t.bill, quantity);
                cout << "Item added to wishlist!" << endl;
                cout << "DO YOU WANT TO LOOK INTO WISHLIST/press 1" << endl;
                cin >> a;
                if (a == 1)
                {
                    t.displaywishlistFromFile();
                }
                break;
            case '3':

                viewBLUSHON(item);
                break;
            }
        }
    }
    else if (choice == 'h' || choice == 'H')
    {
    i:
        system("cls");
        cout << "\t\t\tHIGHLIGHTER DETAILS" << endl;
        cout << "\t\t[1] MAYBELLINE_HIGHLIGHTERS => PRICE 1,500" << endl;
        cout << "\t\t[2]  HUDA_BEAUTY_HIGHLIGHTERS=> PRICE 1,500" << endl;
        cout << "\t\t[3]  RAREBEAUTY_HIGHLIGHTERS => PRICE 2,500" << endl;
        cout << "\t\t[4]KYLIE_HIGHLIGHTERS => PRICE 3,500" << endl;
        cout << endl;
        cout << "\t\t ENTER YOUR CHOICE" << endl;
        cin >> item;
        switch (item)
        {
        case '1':
            t.currentItemSelected = "MAYBELLINE_HIGHLIGHTERS  ";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (MAYBELLINE_HIGHLIGHTERS[0] < t.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    MAYBELLINE_HIGHLIGHTERS[i] = 200;
                }
            }

            if (MAYBELLINE_HIGHLIGHTERS[0] >= quantity)
            {
                MAYBELLINE_HIGHLIGHTERS[0] -= quantity;
                cout << quantity << " MAYBELLINE_HIGHLIGHTERS  flour added to the cart." << endl;
                t.bill += quantity * 2000;
                cout << "YOUR BILL IS " << t.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '2':
            t.currentItemSelected = " HUDA_BEAUTY_HIGHLIGHTERS";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (HUDA_BEAUTY_HIGHLIGHTERS[0] < t.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    HUDA_BEAUTY_HIGHLIGHTERS[i] = 200;
                }
            }

            if (HUDA_BEAUTY_HIGHLIGHTERS[0] >= quantity)
            {
                HUDA_BEAUTY_HIGHLIGHTERS[0] -= quantity;
                {
                    cout << quantity << " HUDA_BEAUTY_HIGHLIGHTERS added to the cart." << endl;
                    t.bill += quantity * 2500;
                    cout << "YOUR BILL IS " << t.bill << endl;
                }
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '3':
            t.currentItemSelected = "RAREBEAUTY_HIGHLIGHTERS ";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (RAREBEAUTY_HIGHLIGHTERS[0] < t.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    RAREBEAUTY_HIGHLIGHTERS[i] = 200;
                }
            }

            if (RAREBEAUTY_HIGHLIGHTERS[0] >= quantity)
            {
                RAREBEAUTY_HIGHLIGHTERS[0] -= quantity;
                cout << quantity << " added to the cart." << endl;
                t.bill += quantity * 2200;
                cout << "YOUR BILL IS " << t.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '4':
            t.currentItemSelected = "KYLIE_HIGHLIGHTERS";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (KYLIE_HIGHLIGHTERS[0] < t.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    KYLIE_HIGHLIGHTERS[i] = 200;
                }
            }

            if (KYLIE_HIGHLIGHTERS[0] >= quantity)
            {
                KYLIE_HIGHLIGHTERS[0] -= quantity;
                cout << quantity << "KYLIE_HIGHLIGHTERS added to the cart." << endl;
                t.bill += quantity * 1500;
                cout << "YOUR BILL IS " << t.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        default:
            cout << "Invalid choice." << endl;
            goto i;
        }
        cout << "Do you want to buy now? (y/n): ";
        char buyChoice;
        cin >> buyChoice;

        if (buyChoice == 'y' || buyChoice == 'Y')
        {
            cout << "Items bought successfully!" << endl;
            cout << "_______________________________" << endl;
            cout << "|     YOUR BILL               |" << endl;
            cout << "| Total: " << t.bill << " \t\t      |" << endl;
            cout << "| " << t.currentItemSelected << " |" << endl;
            cout << "|                             |" << endl;
            cout << "|        THANK YOU            |" << endl;
            cout << "|_____________________________|" << endl;
            t.addToBill(t.currentItemSelected, t.bill, quantity);
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

            case '1':
                int a;

                t.addToCart(t.currentItemSelected, t.bill, quantity);
                cout << "DO YOU WANT TO LOOK INTO CART /press 1" << endl;
                cin >> a;
                if (a == 1)
                {
                    t.displayCartItemsFromFile();
                    t.calculateTotal();
                    cout << "Do you want to delete an item from the cart? (y/n): ";
                    char deleteChoice;
                    cin >> deleteChoice;

                    if (deleteChoice == 'y' || deleteChoice == 'Y')
                    {
                        int deleteIndex;
                        cout << "Enter the index of the item you want to delete: ";
                        cin >> deleteIndex;
                        t.deleteCartItem(deleteIndex - 1);
                        t.displayCartItemsFromFile();
                        t.calculateTotal();
                    }
                    else
                    {

                        cout << "Proceeding with other actions or ending the process..." << endl;
                    }
                }

                break;
            case '2':
                t.addTowishlist(t.currentItemSelected, t.bill, quantity);
                cout << "Item added to wishlist!" << endl;
                cout << "DO YOU WANT TO LOOK INTO WISHLIST/press 1" << endl;
                cin >> a;
                if (a == 1)
                {
                    t.displaywishlistFromFile();
                }
                break;
            case '3':

                viewHIGHLIGHTER(item);
                break;
            }
        }
    }
}

void makeover::physicalMakeup()
{
    char choice;
    char item;
    int quantity;
    Shoppingcart r;
    cout << "\t\t\t\tWELCOME TO MAKEUP CENTER" << endl;
    cout << "\t\t\t\tFOLLOW THESE INSTRUCTION" << endl;
    cout << "ENTER F FOR FOUNDATION" << endl;
    cout << "ENTER L FOR LIPSTICK" << endl;
    cout << "ENTER N FOR NAIL POLISH" << endl;
    cout << "ENTER B FOR BLUSH ON" << endl;
    cout << "ENTER H FOR HIGHLIGHTER" << endl;
    cin >> choice;
    if (choice == 'f' || choice == 'F')
    {
    x:

        system("cls");
        cout << "\t\t\t FOUNDATION DETAILS" << endl;
        cout << "\t\t[1] DIOR => PRICE 9,000" << endl;
        cout << "\t\t[2] FIT ME => PRICE 7,500" << endl;
        cout << "\t\t[3] HUDA BEAUTY => PRICE 7,000" << endl;
        cout << "\t\t[4] LAKME => PRICE 7,000" << endl;
        cout << endl;
        cout << "\t\t ENTER YOUR CHOICE" << endl;
        cin >> item;
        string currentItemSelected;
        r.bill = 0;
        switch (item)
        {
        case '1':

            currentItemSelected = "DIOR";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (DIOR[0] < r.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    DIOR[i] = 200;
                }
            }

            if (DIOR[0] >= quantity)
            {
                DIOR[0] -= quantity;
                cout << quantity << " DIOR FOUNDATION added to the cart." << endl;
                r.bill += quantity * 9000;
                cout << "YOUR BILL IS " << r.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;

        case '2':
            currentItemSelected = "FIT_ME";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (FIT_ME[0] < r.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    FIT_ME[i] = 200;
                }
            }

            if (FIT_ME[0] >= quantity)
            {
                FIT_ME[0] -= quantity;
                cout << quantity << " FIT ME FOUNDATION added to the cart." << endl;
                r.bill += quantity * 7500;
                cout << "YOUR BILL IS " << r.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '3':
            currentItemSelected = "HUDA_BEAUTY";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (HUDA_BEAUTY[0] < r.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    HUDA_BEAUTY[i] = 200;
                }
            }

            if (HUDA_BEAUTY[0] >= quantity)
            {
                HUDA_BEAUTY[0] -= quantity;
                cout << quantity << " HUDA_BEAUTY added to the cart." << endl;
                r.bill += quantity * 7000;
                cout << "YOUR BILL IS " << r.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '4':
            currentItemSelected = "LAKME";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (LAKME[0] < r.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    LAKME[i] = 200;
                }
            }

            if (LAKME[0] >= quantity)
            {
                LAKME[0] -= quantity;
                cout << quantity << " LAKME FOUNDATION added to the cart." << endl;
                r.bill += quantity * 7000;
                cout << "YOUR BILL IS " << r.bill << endl;
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
    ooo:
        system("cls");
        cout << "\t\t\tLIPSTICK DETAILS" << endl;
        cout << "\t\t[1] MEDORA => PRICE 9,000" << endl;
        cout << "\t\t[2]   MAC_LIPSTICKS  => PRICE 7,500" << endl;
        cout << "\t\t[3]  LAKME => PRICE 7,000" << endl;
        cout << "\t\t[4] MAYBELLINE=> PRICE 7,000" << endl;
        cout << endl;
        cout << "\t\t ENTER YOUR CHOICE" << endl;
        cin >> item;
        switch (item)
        {
        case '1':
            r.currentItemSelected = "MEDORA ";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (MEDORA[0] < r.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    MEDORA[i] = 200;
                }
            }

            if (MEDORA[0] >= quantity)
            {
                MEDORA[0] -= quantity;
                cout << quantity << " MEDORA lipstick added to the cart." << endl;
                r.bill += quantity * 2000;
                cout << "YOUR BILL IS " << r.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '2':
            r.currentItemSelected = "MAC_LIPSTICKS";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (MAC_LIPSTICKS[0] < r.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    MAC_LIPSTICKS[i] = 200;
                }
            }

            if (MAC_LIPSTICKS[0] >= quantity)
            {
                MAC_LIPSTICKS[0] -= quantity;
                cout << quantity << " MAC_LIPSTICKS added to the cart." << endl;
                r.bill += quantity * 2500;
                cout << "YOUR BILL IS " << r.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '3':
            r.currentItemSelected = "LAKME";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (LAKME[0] < r.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    LAKME[i] = 200;
                }
            }

            if (LAKME[0] >= quantity)
            {
                LAKME[0] -= quantity;
                cout << quantity << " LAKME lippstick added to the cart." << endl;
                r.bill += quantity * 2200;
                cout << "YOUR BILL IS " << r.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '4':
            r.currentItemSelected = "MAYBELLINE";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (MAYBELLINE[0] < r.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    MAYBELLINE[i] = 200;
                }
            }

            if (MAYBELLINE[0] >= quantity)
            {
                MAYBELLINE[0] -= quantity;
                cout << quantity << "MAYBELLINE lipstick added to the cart." << endl;
                r.bill += quantity * 1500;
                cout << "YOUR BILL IS " << r.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        default:
            cout << "Invalid choice." << endl;
            goto ooo;
        }
    }
    else if (choice == 'n' || choice == 'N')
    {
    NAIL:
        system("cls");
        cout << "\t\t\tNAIL POLISH DETAILS" << endl;
        cout << "\t\t[1] RED => PRICE 500" << endl;
        cout << "\t\t[2]  YELLOW=> PRICE 500" << endl;
        cout << "\t\t[3]  BLACK => PRICE 500" << endl;
        cout << "\t\t[4] PINK=> PRICE 500" << endl;
        cout << endl;
        cout << "\t\t ENTER YOUR CHOICE" << endl;
        cin >> item;
        switch (item)
        {
        case '1':
            r.currentItemSelected = "RED ";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (RED[0] < r.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    RED[i] = 200;
                }
            }

            if (RED[0] >= quantity)
            {
                RED[0] -= quantity;
                cout << quantity << " RED nail paint added to the cart." << endl;
                r.bill += quantity * 2000;
                cout << "YOUR BILL IS " << r.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '2':
            r.currentItemSelected = "YELLOW";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (YELLOW[0] < r.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    YELLOW[i] = 200;
                }
            }

            if (YELLOW[0] >= quantity)
            {
                YELLOW[0] -= quantity;
                {
                    cout << quantity << "YELLOW nail paint added to the cart." << endl;
                    r.bill += quantity * 2500;
                    cout << "YOUR BILL IS " << r.bill << endl;
                }
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '3':
            r.currentItemSelected = "BLACK";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (BLACK[0] < r.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    BLACK[i] = 200;
                }
            }

            if (BLACK[0] >= quantity)
            {
                BLACK[0] -= quantity;
                cout << quantity << " BLACK NAIL PAINT added to the cart." << endl;
                r.bill += quantity * 2200;
                cout << "YOUR BILL IS " << r.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '4':
            r.currentItemSelected = "PINK";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (PINK[0] < r.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    PINK[i] = 200;
                }
            }

            if (PINK[0] >= quantity)
            {
                PINK[0] -= quantity;
                cout << quantity << "PINK  NAIL PAINT added to the cart." << endl;
                r.bill += quantity * 1500;
                cout << "YOUR BILL IS " << r.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        default:
            cout << "Invalid choice." << endl;
            goto NAIL;
        }
    }
    else if (choice == 'b' || choice == 'B')
    {
    OOK:

        system("cls");
        cout << "\t\t\tBLUSH ON DETAILS" << endl;
        cout << "\t\t[1]  MAYBELLINE_BLUSH_ON => PRICE 1,500" << endl;
        cout << "\t\t[2]  HUDA_BEAUTY_BLUSH_ON=> PRICE 1,500" << endl;
        cout << "\t\t[3]  RARE_BEAUTY => PRICE 2,500" << endl;
        cout << "\t\t[4] KYLIE => PRICE 3,500" << endl;
        cout << endl;
        cout << "\t\t ENTER YOUR CHOICE" << endl;
        cin >> item;
        switch (item)
        {
        case '1':
            r.currentItemSelected = "MAYBELLINE_BLUSH_ON ";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (MAYBELLINE_BLUSH_ON[0] < r.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    MAYBELLINE_BLUSH_ON[i] = 200;
                }
            }

            if (MAYBELLINE_BLUSH_ON[0] >= quantity)
            {
                MAYBELLINE_BLUSH_ON[0] -= quantity;
                cout << quantity << " MAYBELLINE_BLUSH_ON added to the cart." << endl;
                r.bill += quantity * 2000;
                cout << "YOUR BILL IS " << r.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '2':
            r.currentItemSelected = "HUDA_BEAUTY_BLUSH_ON";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (HUDA_BEAUTY_BLUSH_ON[0] < r.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    HUDA_BEAUTY_BLUSH_ON[i] = 200;
                }
            }

            if (HUDA_BEAUTY_BLUSH_ON[0] >= quantity)
            {
                HUDA_BEAUTY_BLUSH_ON[0] -= quantity;
                {
                    cout << quantity << "HUDA_BEAUTY_BLUSH_ON added to the cart." << endl;
                    r.bill += quantity * 2500;
                    cout << "YOUR BILL IS " << r.bill << endl;
                }
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '3':
            r.currentItemSelected = "RARE_BEAUTY";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (RARE_BEAUTY[0] < r.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    RARE_BEAUTY[i] = 200;
                }
            }

            if (RARE_BEAUTY[0] >= quantity)
            {
                RARE_BEAUTY[0] -= quantity;
                cout << quantity << " RARE_BEAUTY added to the cart." << endl;
                r.bill += quantity * 2200;
                cout << "YOUR BILL IS " << r.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '4':
            r.currentItemSelected = "KYLIE";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (KYLIE[0] < r.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    KYLIE[i] = 200;
                }
            }

            if (KYLIE[0] >= quantity)
            {
                KYLIE[0] -= quantity;
                cout << quantity << "KYLIE BLUSH ON added to the cart." << endl;
                r.bill += quantity * 1500;
                cout << "YOUR BILL IS " << r.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        default:
            cout << "Invalid choice." << endl;
            goto OOK;
        }
    }
    else if (choice == 'h' || choice == 'H')
    {
    MO:
        system("cls");
        cout << "\t\t\tHIGHLIGHTER DETAILS" << endl;
        cout << "\t\t[1] MAYBELLINE_HIGHLIGHTERS => PRICE 1,500" << endl;
        cout << "\t\t[2]  HUDA_BEAUTY_HIGHLIGHTERS=> PRICE 1,500" << endl;
        cout << "\t\t[3]  RAREBEAUTY_HIGHLIGHTERS => PRICE 2,500" << endl;
        cout << "\t\t[4]KYLIE_HIGHLIGHTERS => PRICE 3,500" << endl;
        cout << endl;
        cout << "\t\t ENTER YOUR CHOICE" << endl;
        cin >> item;
        switch (item)
        {
        case '1':
            r.currentItemSelected = "MAYBELLINE_HIGHLIGHTERS  ";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (MAYBELLINE_HIGHLIGHTERS[0] < r.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    MAYBELLINE_HIGHLIGHTERS[i] = 200;
                }
            }

            if (MAYBELLINE_HIGHLIGHTERS[0] >= quantity)
            {
                MAYBELLINE_HIGHLIGHTERS[0] -= quantity;
                cout << quantity << " MAYBELLINE_HIGHLIGHTERS  flour added to the cart." << endl;
                r.bill += quantity * 2000;
                cout << "YOUR BILL IS " << r.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '2':
            r.currentItemSelected = " HUDA_BEAUTY_HIGHLIGHTERS";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (HUDA_BEAUTY_HIGHLIGHTERS[0] < r.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    HUDA_BEAUTY_HIGHLIGHTERS[i] = 200;
                }
            }

            if (HUDA_BEAUTY_HIGHLIGHTERS[0] >= quantity)
            {
                HUDA_BEAUTY_HIGHLIGHTERS[0] -= quantity;
                {
                    cout << quantity << " HUDA_BEAUTY_HIGHLIGHTERS added to the cart." << endl;
                    r.bill += quantity * 2500;
                    cout << "YOUR BILL IS " << r.bill << endl;
                }
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '3':
            r.currentItemSelected = "RAREBEAUTY_HIGHLIGHTERS ";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (RAREBEAUTY_HIGHLIGHTERS[0] < r.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    RAREBEAUTY_HIGHLIGHTERS[i] = 200;
                }
            }

            if (RAREBEAUTY_HIGHLIGHTERS[0] >= quantity)
            {
                RAREBEAUTY_HIGHLIGHTERS[0] -= quantity;
                cout << quantity << " added to the cart." << endl;
                r.bill += quantity * 2200;
                cout << "YOUR BILL IS " << r.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '4':
            r.currentItemSelected = "KYLIE_HIGHLIGHTERS";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (KYLIE_HIGHLIGHTERS[0] < r.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    KYLIE_HIGHLIGHTERS[i] = 200;
                }
            }

            if (KYLIE_HIGHLIGHTERS[0] >= quantity)
            {
                KYLIE_HIGHLIGHTERS[0] -= quantity;
                cout << quantity << "KYLIE_HIGHLIGHTERS added to the cart." << endl;
                r.bill += quantity * 1500;
                cout << "YOUR BILL IS " << r.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        default:
            cout << "Invalid choice." << endl;
            goto MO;
        }
    }
}