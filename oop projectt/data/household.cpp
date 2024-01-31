#include "data_header.h"
using namespace std;
void household::viewOIL(char item)
{

    switch (item)
    {
    case '1':
        cout << "Details of DALDA OIL:" << endl;
        cout << "DALDA PACK"
             << ": PRICE"
             << "9000" << endl;
        break;
    case '2':
        cout << "Details of CANOLA OIL:" << endl;
        cout << "CANOLA PACK "
             << ": PRICE"
             << "7500" << endl;
        break;
    case '3':
        cout << "Details of MEEZAN OIL:" << endl;
        cout << "MEEZAN "
             << ": PRICE"
             << "7000" << endl;
        break;
    case '4':
        cout << "Details of SUFI OIL:" << endl;
        cout << "SUFI "
             << ": PRICE"
             << "7000" << endl;
        break;
    default:
        cout << "Invalid item!" << endl;
        break;
    }
}
void household::viewRICE(char item)
{
    switch (item)
    {
    case '1':
        cout << "Details of FALAK PREMIUM/1KG:" << endl;
        cout << "FALAK PREMIUM/1KG"
             << ": PRICE"
             << "2000" << endl;
        break;
    case '2':
        cout << "Details of BASMATI/1KGL:" << endl;
        cout << "BASMATI/1KG "
             << ": PRICE"
             << "2,500" << endl;
        break;
    case '3':
        cout << "Details of GUARD/1KG:" << endl;
        cout << "GUARD/1KG "
             << ": PRICE"
             << "2200" << endl;
        break;
    case '4':
        cout << "Details of KING XI/1KG:" << endl;
        cout << "KING XI/1KG "
             << ": PRICE"
             << "1500" << endl;
        break;
    default:
        cout << "Invalid item!" << endl;
        break;
    }
}
void household::viewFLOUR(char item)
{
    switch (item)
    {
    case '1':
        cout << "Details of SUNRIDGE/1KG:" << endl;
        cout << "SUNRIDGE/1KG"
             << ": PRICE"
             << "2000" << endl;
        break;
    case '2':
        cout << "Details of BAKE PARLOR/1KG:" << endl;
        cout << "BAKE PARLOR/1KG "
             << ": PRICE"
             << "2500" << endl;
        break;
    case '3':
        cout << "Details of RAFHAN/1KG:" << endl;
        cout << "RAFHAN/1KG "
             << ": PRICE"
             << "2,200" << endl;
        break;
    case '4':
        cout << "Details of FAUJI/1KG:" << endl;
        cout << "FAUJI "
             << ": PRICE"
             << "1,500" << endl;
        break;
    default:
        cout << "Invalid item!" << endl;
        break;
    }
}
void household::viewSUGAR(char item)
{

    switch (item)
    {
    case '1':
        cout << "Details of BROWN SUGAR/1KGL:" << endl;
        cout << "BROWN SUGAR"
             << ": PRICE"
             << "2000" << endl;
        break;
    case '2':
        cout << "Details of EATING PURE/1KG:" << endl;
        cout << "EATING PURE/1KG "
             << ": PRICE"
             << "2500" << endl;
        break;
    case '3':
        cout << "Details of CHASHNIK/1KG:" << endl;
        cout << "CHASHNIK "
             << ": PRICE"
             << "2,200" << endl;
        break;
    case '4':
        cout << "Details of AMNA/1KG:" << endl;
        cout << "AMNA "
             << ": PRICE"
             << "1,500" << endl;
        break;
    default:
        cout << "Invalid item!" << endl;
        break;
    }
}
void household::viewTEA(char item)
{
    switch (item)
    {
    case '1':
        cout << "Details of LIPTON/1KG:" << endl;
        cout << "LIPTON PACK"
             << ": PRICE"
             << "900" << endl;
        break;
    case '2':
        cout << "Details of DANEDAR/1KG:" << endl;
        cout << "DANEDAR PACK "
             << ": PRICE"
             << "750" << endl;
        break;
    case '3':
        cout << "Details of TEZDUM/1KG:" << endl;
        cout << "TEZDUM "
             << ": PRICE"
             << "600" << endl;
        break;
    case '4':
        cout << "Details of VITAL/1KG:" << endl;
        cout << "VITAL "
             << ": PRICE"
             << "500" << endl;
        break;
    default:
        cout << "Invalid item!" << endl;
        break;
    }
}
void household::viewNOODLES(char item)
{
    switch (item)
    {
    case '1':
        cout << "Details of KNOR:" << endl;
        cout << "KNOR NOODLE PACK"
             << ": PRICE"
             << "300" << endl;
        break;
    case '2':
        cout << "Details of SHOOP :" << endl;
        cout << "SHOOP PACK "
             << ": PRICE"
             << "200" << endl;
        break;
    case '3':
        cout << "Details of MAAGI:" << endl;
        cout << "MAAGI"
             << ": PRICE"
             << "100" << endl;
        break;
    case '4':
        cout << "Details of KELLOGG:" << endl;
        cout << "KELLOGG"
             << ": PRICE"
             << "600" << endl;
        break;
    default:
        cout << "Invalid item!" << endl;
        break;
    }
}
household::household()
{

    for (int i = 0; i < 200; ++i)
    {
        DALDA[i] = 200;
        CANOLA[i] = 200;
        MEEZAN[i] = 200;
        SUFI[i] = 200;
        FALAK_PREMIUM[i] = 200;
        BASMATI[i] = 200;
        GUARD[i] = 200;
        KING[i] = 200;
        SUNRIDGE[i] = 200;
        BAKEPARLOR[i] = 200;
        RAFHAN[i] = 200;
        FAUJI[i] = 200;
        BROWNSUGAR[i] = 200;
        EATING_PURE[i] = 200;
        CHASHNIK[i] = 200;
        AMNA[i] = 200;
        LIPTON[i] = 200;
        DANEDAR[i] = 200;
        TEZDUM[i] = 200;
        VITAL[i] = 200;
        KNOR[i] = 200;
        SHOOP[i] = 200;
        MAGGI[i] = 200;
        KELLOGG[i] = 200;
    }
}

void household::grocery()
{
    char choice;
    int item, quantity;
    Shoppingcart s;
    cout << "\t\t\t\tWELCOME TO groccery CENTER" << endl;
    cout << "\t\t\t\tFOLLOW THESE INSTRUCTION" << endl;
    cout << "ENTER O FOR OIL" << endl;
    cout << "ENTER R FOR RICE" << endl;
    cout << "ENTER F FOR FLOUR" << endl;
    cout << "ENTER S FOR SUGAR" << endl;
    cout << "ENTER T FOR TEA" << endl;
    cout << "ENTER N FOR NOODLES" << endl;
    cin >> choice;
    if (choice == 'o' || choice == 'O')
    {
    x:
        system("cls");
        cout << "\t\t\tOIL DETAILS" << endl;
        cout << "\t\t[1] DALDA/1kg => PRICE 9,000" << endl;
        cout << "\t\t[2] CANOLA/1kg => PRICE 7,500" << endl;
        cout << "\t\t[3] MEEZAN/1kg => PRICE 7,000" << endl;
        cout << "\t\t[4] SUFI/1kg=> PRICE 7,000" << endl;
        cout << endl;
        cout << "\t\t ENTER YOUR CHOICE" << endl;
        cin >> item;
        string currentItemSelected;
        s.bill = 0;
        switch (item)
        {
        case 1:

            currentItemSelected = "DALDA";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (DALDA[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    DALDA[i] = 200;
                }
            }

            if (DALDA[0] >= quantity)
            {
                DALDA[0] -= quantity;
                cout << quantity << " DALDA OIL added to the cart." << endl;
                s.bill += quantity * 9000;
                cout << "YOUR BILL IS " << s.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;

        case 2:
            currentItemSelected = "CANOLA";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (CANOLA[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    CANOLA[i] = 200;
                }
            }

            if (CANOLA[0] >= quantity)
            {
                CANOLA[0] -= quantity;
                cout << quantity << " CANOLA OIL added to the cart." << endl;
                s.bill += quantity * 7500;
                cout << "YOUR BILL IS " << s.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case 3:
            currentItemSelected = "MEEZAN";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (MEEZAN[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    MEEZAN[i] = 200;
                }
            }

            if (MEEZAN[0] >= quantity)
            {
                MEEZAN[0] -= quantity;
                cout << quantity << " VIVO phones added to the cart." << endl;
                s.bill += quantity * 7000;
                cout << "YOUR BILL IS " << s.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case 4:
            currentItemSelected = "SUFI";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (SUFI[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    SUFI[i] = 200;
                }
            }

            if (SUFI[0] >= quantity)
            {
                SUFI[0] -= quantity;
                cout << quantity << " NOKIA phones added to the cart." << endl;
                s.bill += quantity * 7000;
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
            cout << "_______________________________" << endl;
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

                viewOIL(item);
                break;
            }
        }
    }

    else if (choice == 'r' || choice == 'R')
    {
    y:
        system("cls");
        cout << "\t\t\t RICE DETAILS" << endl;
        cout << "\t\t[1] FALAK PREMIUM/1KG => PRICE 2,000" << endl;
        cout << "\t\t[2] BASMATI/1KG=> PRICE 2,500" << endl;
        cout << "\t\t[3]  GUARD/1KG => PRICE 2,200" << endl;
        cout << "\t\t[4] KING XI/1KG=> PRICE 1,500" << endl;
        cout << endl;
        cout << "\t\t ENTER YOUR CHOICE" << endl;
        cin >> item;

        switch (item)
        {
        case 1:
            s.currentItemSelected = "FALAK PREMIMUM ";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (FALAK_PREMIUM[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    FALAK_PREMIUM[i] = 200;
                }
            }

            if (FALAK_PREMIUM[0] >= quantity)
            {
                FALAK_PREMIUM[0] -= quantity;
                cout << quantity << " FALAK_PREMIUM RICE added to the cart." << endl;
                s.bill += quantity * 2000;
                cout << "YOUR BILL IS " << s.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case 2:
            s.currentItemSelected = "BASMATI";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (BASMATI[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    BASMATI[i] = 200;
                }
            }

            if (BASMATI[0] >= quantity)
            {
                BASMATI[0] -= quantity;
                cout << quantity << " BASMATI RICE added to the cart." << endl;
                s.bill += quantity * 2500;
                cout << "YOUR BILL IS " << s.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case 3:
            s.currentItemSelected = "GUARD";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (GUARD[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    GUARD[i] = 200;
                }
            }

            if (GUARD[0] >= quantity)
            {
                GUARD[0] -= quantity;
                cout << quantity << " GUARD RICE added to the cart." << endl;
                s.bill += quantity * 2200;
                cout << "YOUR BILL IS " << s.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case 4:
            s.currentItemSelected = "KING";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (KING[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    KING[i] = 200;
                }
            }

            if (KING[0] >= quantity)
            {
                KING[0] -= quantity;
                cout << quantity << " KING RICE added to the cart." << endl;
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
            cout << "_______________________________" << endl;
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

                viewRICE(item);
                break;
            }
        }
    }
    else if (choice == 'f' || choice == 'F')
    {
    h:
        system("cls");
        cout << "\t\t\t FLOUR DETAILS" << endl;
        cout << "\t\t[1] SUNRIDGE/1KG => PRICE 2,000" << endl;
        cout << "\t\t[2] BAKE PARLOR/1KG=> PRICE 2,500" << endl;
        cout << "\t\t[3] RAFHAN/1KG => PRICE 2,200" << endl;
        cout << "\t\t[4] FAUJI/1KG=> PRICE 1,500" << endl;
        cout << endl;
        cout << "\t\t ENTER YOUR CHOICE" << endl;
        cin >> item;

        switch (item)
        {
        case 1:
            s.currentItemSelected = "SUNRIDGE ";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (SUNRIDGE[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    SUNRIDGE[i] = 200;
                }
            }

            if (SUNRIDGE[0] >= quantity)
            {
                SUNRIDGE[0] -= quantity;
                cout << quantity << " SUNRIDGE flour added to the cart." << endl;
                s.bill += quantity * 2000;
                cout << "YOUR BILL IS " << s.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case 2:
            s.currentItemSelected = "BAKEPARLOR";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (BAKEPARLOR[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    BAKEPARLOR[i] = 200;
                }
            }

            if (BAKEPARLOR[0] >= quantity)
            {
                BAKEPARLOR[0] -= quantity;
                {
                    cout << quantity << "BAKEPARLOR flour added to the cart." << endl;
                    s.bill += quantity * 2500;
                    cout << "YOUR BILL IS " << s.bill << endl;
                }
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case 3:
            s.currentItemSelected = "RAFHAN";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (RAFHAN[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    RAFHAN[i] = 200;
                }
            }

            if (RAFHAN[0] >= quantity)
            {
                RAFHAN[0] -= quantity;
                cout << quantity << " RAFHAN FLOUR added to the cart." << endl;
                s.bill += quantity * 2200;
                cout << "YOUR BILL IS " << s.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case 4:
            s.currentItemSelected = "FAUJI";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (FAUJI[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    FAUJI[i] = 200;
                }
            }

            if (FAUJI[0] >= quantity)
            {
                FAUJI[0] -= quantity;
                cout << quantity << "FAUJI FLOUR added to the cart." << endl;
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
            goto h;
        }
        cout << "Do you want to buy now? (y/n): ";
        char buyChoice;
        cin >> buyChoice;

        if (buyChoice == 'y' || buyChoice == 'Y')
        {
            cout << "Items bought successfully!" << endl;
            cout << "_______________________________" << endl;
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

                viewFLOUR(item);
                break;
            }
        }
    }
    else if (choice == 's' || choice == 'S')
    {
    l:
        system("cls");
        cout << "\t\t\t SUGAR DETAILS" << endl;
        cout << "\t\t[1] BROWN SUGAR/1KG => PRICE 2,000" << endl;
        cout << "\t\t[2] EATING PURE/1KG=> PRICE 2,500" << endl;
        cout << "\t\t[3] CHASHNIK/1KG => PRICE 2,200" << endl;
        cout << "\t\t[4] AMNA /1KG=> PRICE 1,500" << endl;
        cout << endl;
        cout << "\t\t ENTER YOUR CHOICE" << endl;
        cin >> item;

        switch (item)
        {
        case '1':
            s.currentItemSelected = " BROWNSUGAR ";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (BROWNSUGAR[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    BROWNSUGAR[i] = 200;
                }
            }

            if (BROWNSUGAR[0] >= quantity)
            {
                BROWNSUGAR[0] -= quantity;
                cout << quantity << " BROWN SUGAR added to the cart." << endl;
                s.bill += quantity * 2000;
                cout << "YOUR BILL IS " << s.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '2':
            s.currentItemSelected = "EATING_PURE";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (EATING_PURE[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    EATING_PURE[i] = 200;
                }
            }

            if (EATING_PURE[0] >= quantity)
            {
                EATING_PURE[0] -= quantity;
                cout << quantity << " EATING_PURE SUGAR added to the cart." << endl;
                s.bill += quantity * 2500;
                cout << "YOUR BILL IS " << s.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '3':
            s.currentItemSelected = "CHASHNIK";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (CHASHNIK[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    CHASHNIK[i] = 200;
                }
            }

            if (CHASHNIK[0] >= quantity)
            {
                CHASHNIK[0] -= quantity;
                cout << quantity << " CHASHNIK added to the cart." << endl;
                s.bill += quantity * 2200;
                cout << "YOUR BILL IS " << s.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '4':
            s.currentItemSelected = "AMNA";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (AMNA[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    AMNA[i] = 200;
                }
            }

            if (AMNA[0] >= quantity)
            {
                AMNA[0] -= quantity;
                cout << quantity << "AMNA SUGAR added to the cart." << endl;
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
            cout << "_______________________________" << endl;
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

                viewSUGAR(item);
                break;
            }
        }
    }
    else if (choice == 't' || choice == 'T')
    {
    v:
        system("cls");
        cout << "\t\t\t TEA DETAILS" << endl;
        cout << "\t\t[1] LIPTON/1KG => PRICE 900" << endl;
        cout << "\t\t[2] VITAL /1KG=> PRICE 500" << endl;
        cout << "\t\t[3] DANEDAR/1KG=> PRICE 750" << endl;
        cout << "\t\t[4] TEZDUM/1KG => PRICE 600 " << endl;
        cout << endl;
        cout << "\t\t ENTER YOUR CHOICE" << endl;
        cin >> item;

        switch (item)
        {
        case 1:
            s.currentItemSelected = "  LIPTON ";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (LIPTON[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    LIPTON[i] = 200;
                }
            }

            if (LIPTON[0] >= quantity)
            {
                LIPTON[0] -= quantity;
                cout << quantity << "  LIPTON TEA added to the cart." << endl;
                s.bill += quantity * 900;
                cout << "YOUR BILL IS " << s.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case 2:
            s.currentItemSelected = "VITAL";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (VITAL[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    VITAL[i] = 200;
                }
            }

            if (VITAL[0] >= quantity)
            {
                VITAL[0] -= quantity;
                cout << quantity << " VITAL TEA added to the cart." << endl;
                s.bill += quantity * 500;
                cout << "YOUR BILL IS " << s.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case 3:
            s.currentItemSelected = "DANEDAR";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (DANEDAR[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    DANEDAR[i] = 200;
                }
            }

            if (DANEDAR[0] >= quantity)
            {
                DANEDAR[0] -= quantity;
                cout << quantity << " DANEDAR TEA added to the cart." << endl;
                s.bill += quantity * 750;
                cout << "YOUR BILL IS " << s.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case 4:
            s.currentItemSelected = "TEZDUM";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (TEZDUM[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    TEZDUM[i] = 200;
                }
            }

            if (TEZDUM[0] >= quantity)
            {
                TEZDUM[0] -= quantity;
                cout << quantity << "TEZDUM TEA added to the cart." << endl;
                s.bill += quantity * 600;
                cout << "YOUR BILL IS " << s.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        default:
            cout << "Invalid choice." << endl;
            goto v;
        }
        cout << "Do you want to buy now? (y/n): ";
        char buyChoice;
        cin >> buyChoice;

        if (buyChoice == 'y' || buyChoice == 'Y')
        {
            cout << "Items bought successfully!" << endl;
            cout << "_______________________________" << endl;
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

                viewTEA(item);
                break;
            }
        }
    }
    else if (choice == 'n' || choice == 'N')
    {
    q:
        cout << "\t\t\t NOODLES DETAILS" << endl;
        cout << "\t\t[1] KNOR => PRICE 300" << endl;
        cout << "\t\t[2] SHOOP=> PRICE 200" << endl;
        cout << "\t\t[3] MAGGI=> PRICE 100" << endl;
        cout << "\t\t[4] KELLOGG=> PRICE 600" << endl;
        cout << endl;
        cout << "\t\t ENTER YOUR CHOICE" << endl;
        cin >> item;

        switch (item)
        {
        case '1':
            s.currentItemSelected = " KNOR ";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (KNOR[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    KNOR[i] = 200;
                }
            }

            if (KNOR[0] >= quantity)
            {
                KNOR[0] -= quantity;
                cout << quantity << "  KNOR NODDLES added to the cart." << endl;
                s.bill += quantity * 300;
                cout << "YOUR BILL IS " << s.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '2':
            s.currentItemSelected = "SHOOP";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (SHOOP[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    SHOOP[i] = 200;
                }
            }

            if (SHOOP[0] >= quantity)
            {
                SHOOP[0] -= quantity;
                cout << quantity << " SHOOP NOODLES added to the cart." << endl;
                s.bill += quantity * 200;
                cout << "YOUR BILL IS " << s.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '3':
            s.currentItemSelected = " MAGGI";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (MAGGI[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    MAGGI[i] = 200;
                }
            }

            if (MAGGI[0] >= quantity)
            {
                MAGGI[0] -= quantity;
                cout << quantity << "  MAGGI NOODELS added to the cart." << endl;
                s.bill += quantity * 100;
                cout << "YOUR BILL IS " << s.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '4':
            s.currentItemSelected = "KELLOGG";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (KELLOGG[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    KELLOGG[i] = 200;
                }
            }

            if (KELLOGG[0] >= quantity)
            {
                KELLOGG[0] -= quantity;
                cout << quantity << "KELLOGG NOODLES added to the cart." << endl;
                s.bill += quantity * 600;
                cout << "YOUR BILL IS " << s.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        default:
            cout << "Invalid choice." << endl;
            goto q;
        }
        cout << "Do you want to buy now? (y/n): ";
        char buyChoice;
        cin >> buyChoice;

        if (buyChoice == 'y' || buyChoice == 'Y')
        {
            cout << "Items bought successfully!" << endl;
            cout << "_______________________________" << endl;
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

                viewNOODLES(item);
                break;
            }
        }
    }
}
void household::physicalGrocery()
{
    char choice;
    char item;
    int quantity;
    Shoppingcart s;
    cout << "\t\t\t\tWELCOME TO GROCERY CENTER" << endl;
    cout << "\t\t\t\tFOLLOW THESE INSTRUCTIONS" << endl;

    cout << "ENTER O FOR OIL" << endl;
    cout << "ENTER R FOR RICE" << endl;
    cout << "ENTER F FOR FLOUR" << endl;
    cout << "ENTER S FOR SUGAR" << endl;
    cout << "ENTER T FOR TEA" << endl;
    cout << "ENTER N FOR NOODLES" << endl;

    cin >> choice;

    if (choice == 'o' || choice == 'O')
    {
    x:
        system("cls");
        cout << "\t\t\tOIL DETAILS" << endl;
        cout << "\t\t[1] DALDA => PRICE 9,000" << endl;
        cout << "\t\t[2] CANOLA => PRICE 7,500" << endl;
        cout << "\t\t[3]  MEEZAN => PRICE 7,000" << endl;
        cout << "\t\t[4] SUFI=> PRICE 7,000" << endl;
        cout << endl;
        cout << "\t\t ENTER YOUR CHOICE" << endl;
        cin >> item;
        string currentItemSelected;
        s.bill = 0;
        switch (item)
        {
        case '1':

            currentItemSelected = "DALDA";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (DALDA[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    DALDA[i] = 200;
                }
            }

            if (DALDA[0] >= quantity)
            {
                DALDA[0] -= quantity;
                cout << quantity << " DALDA OIL added to the cart." << endl;
                s.bill += quantity * 9000;
                cout << "YOUR BILL IS " << s.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;

        case '2':
            currentItemSelected = "CANOLA";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (CANOLA[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    CANOLA[i] = 200;
                }
            }

            if (CANOLA[0] >= quantity)
            {
                CANOLA[0] -= quantity;
                cout << quantity << " CANOLA OIL added to the cart." << endl;
                s.bill += quantity * 7500;
                cout << "YOUR BILL IS " << s.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '3':
            currentItemSelected = "MEEZAN";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (MEEZAN[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    MEEZAN[i] = 200;
                }
            }

            if (MEEZAN[0] >= quantity)
            {
                MEEZAN[0] -= quantity;
                cout << quantity << " VIVO phones added to the cart." << endl;
                s.bill += quantity * 7000;
                cout << "YOUR BILL IS " << s.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '4':
            currentItemSelected = "SUFI";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (SUFI[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    SUFI[i] = 200;
                }
            }

            if (SUFI[0] >= quantity)
            {
                SUFI[0] -= quantity;
                cout << quantity << " NOKIA phones added to the cart." << endl;
                s.bill += quantity * 7000;
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
    }
    else if (choice == 'r' || choice == 'R')
    {
    y:
        system("cls");
        cout << "\t\t\t RICE DETAILS" << endl;
        cout << "\t\t[1] FALAK PREMIUM/1KG => PRICE 2,000" << endl;
        cout << "\t\t[2] BASMATI/1KG=> PRICE 2,500" << endl;
        cout << "\t\t[3]  GUARD/1KG => PRICE 2,200" << endl;
        cout << "\t\t[4] KING XI/1KG=> PRICE 1,500" << endl;
        cout << endl;
        cout << "\t\t ENTER YOUR CHOICE" << endl;
        cin >> item;

        switch (item)
        {
        case '1':
            s.currentItemSelected = "FALAK PREMIMUM ";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (FALAK_PREMIUM[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    FALAK_PREMIUM[i] = 200;
                }
            }

            if (FALAK_PREMIUM[0] >= quantity)
            {
                FALAK_PREMIUM[0] -= quantity;
                cout << quantity << " FALAK_PREMIUM RICE added to the cart." << endl;
                s.bill += quantity * 2000;
                cout << "YOUR BILL IS " << s.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '2':
            s.currentItemSelected = "BASMATI";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (BASMATI[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    BASMATI[i] = 200;
                }
            }

            if (BASMATI[0] >= quantity)
            {
                BASMATI[0] -= quantity;
                cout << quantity << " BASMATI RICE added to the cart." << endl;
                s.bill += quantity * 2500;
                cout << "YOUR BILL IS " << s.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '3':
            s.currentItemSelected = "GUARD";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (GUARD[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    GUARD[i] = 200;
                }
            }

            if (GUARD[0] >= quantity)
            {
                GUARD[0] -= quantity;
                cout << quantity << " GUARD RICE added to the cart." << endl;
                s.bill += quantity * 2200;
                cout << "YOUR BILL IS " << s.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '4':
            s.currentItemSelected = "KING";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (KING[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    KING[i] = 200;
                }
            }

            if (KING[0] >= quantity)
            {
                KING[0] -= quantity;
                cout << quantity << " KING RICE added to the cart." << endl;
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
    }
    else if (choice == 'f' || choice == 'F')
    {
    u:
        system("cls");
        cout << "\t\t\t FLOUR DETAILS" << endl;
        cout << "\t\t[1] SUNRIDGE/1KG => PRICE 2,000" << endl;
        cout << "\t\t[2] BAKE PARLOR/1KG=> PRICE 2,500" << endl;
        cout << "\t\t[3] RAFHAN/1KG => PRICE 2,200" << endl;
        cout << "\t\t[4] FAUJI/1KG=> PRICE 1,500" << endl;
        cout << endl;
        cout << "\t\t ENTER YOUR CHOICE" << endl;
        cin >> item;

        switch (item)
        {
        case '1':
            s.currentItemSelected = "SUNRIDGE ";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (SUNRIDGE[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    SUNRIDGE[i] = 200;
                }
            }

            if (SUNRIDGE[0] >= quantity)
            {
                SUNRIDGE[0] -= quantity;
                cout << quantity << " SUNRIDGE flour added to the cart." << endl;
                s.bill += quantity * 2000;
                cout << "YOUR BILL IS " << s.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '2':
            s.currentItemSelected = "BAKEPARLOR";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (BAKEPARLOR[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    BAKEPARLOR[i] = 200;
                }
            }

            if (BAKEPARLOR[0] >= quantity)
            {
                BAKEPARLOR[0] -= quantity;
                {
                    cout << quantity << "BAKEPARLOR flour added to the cart." << endl;
                    s.bill += quantity * 2500;
                    cout << "YOUR BILL IS " << s.bill << endl;
                }
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '3':
            s.currentItemSelected = "RAFHAN";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (RAFHAN[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    RAFHAN[i] = 200;
                }
            }

            if (RAFHAN[0] >= quantity)
            {
                RAFHAN[0] -= quantity;
                cout << quantity << " RAFHAN FLOUR added to the cart." << endl;
                s.bill += quantity * 2200;
                cout << "YOUR BILL IS " << s.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '4':
            s.currentItemSelected = "FAUJI";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (FAUJI[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    FAUJI[i] = 200;
                }
            }

            if (FAUJI[0] >= quantity)
            {
                FAUJI[0] -= quantity;
                cout << quantity << "FAUJI FLOUR added to the cart." << endl;
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
            goto u;
        }
    }
    else if (choice == 's' || choice == 'S')
    {
    r:
        system("cls");
        cout << "\t\t\t SUGAR DETAILS" << endl;
        cout << "\t\t[1] BROWN SUGAR/1KG => PRICE 2,000" << endl;
        cout << "\t\t[2] EATING PURE/1KG=> PRICE 2,500" << endl;
        cout << "\t\t[3] CHASHNIK/1KG => PRICE 2,200" << endl;
        cout << "\t\t[4] AMNA /1KG=> PRICE 1,500" << endl;
        cout << endl;
        cout << "\t\t ENTER YOUR CHOICE" << endl;
        cin >> item;

        switch (item)
        {
        case '1':
            s.currentItemSelected = " BROWNSUGAR ";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (BROWNSUGAR[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    BROWNSUGAR[i] = 200;
                }
            }

            if (BROWNSUGAR[0] >= quantity)
            {
                BROWNSUGAR[0] -= quantity;
                cout << quantity << " BROWN SUGAR added to the cart." << endl;
                s.bill += quantity * 2000;
                cout << "YOUR BILL IS " << s.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '2':
            s.currentItemSelected = "EATING_PURE";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (EATING_PURE[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    EATING_PURE[i] = 200;
                }
            }

            if (EATING_PURE[0] >= quantity)
            {
                EATING_PURE[0] -= quantity;
                cout << quantity << " EATING_PURE SUGAR added to the cart." << endl;
                s.bill += quantity * 2500;
                cout << "YOUR BILL IS " << s.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '3':
            s.currentItemSelected = "CHASHNIK";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (CHASHNIK[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    CHASHNIK[i] = 200;
                }
            }

            if (CHASHNIK[0] >= quantity)
            {
                CHASHNIK[0] -= quantity;
                cout << quantity << " CHASHNIK added to the cart." << endl;
                s.bill += quantity * 2200;
                cout << "YOUR BILL IS " << s.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '4':
            s.currentItemSelected = "AMNA";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (AMNA[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    AMNA[i] = 200;
                }
            }

            if (AMNA[0] >= quantity)
            {
                AMNA[0] -= quantity;
                cout << quantity << "AMNA SUGAR added to the cart." << endl;
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
            goto r;
        }
    }
    else if (choice == 't' || choice == 'T')
    {
    w:
        system("cls");
        cout << "\t\t\t TEA DETAILS" << endl;
        cout << "\t\t[1] LIPTON/1KG => PRICE 900" << endl;
        cout << "\t\t[2] VITAL /1KG=> PRICE 500" << endl;
        cout << "\t\t[3] DANEDAR/1KG=> PRICE 750" << endl;
        cout << "\t\t[4] TEZDUM/1KG => PRICE 600 " << endl;
        cout << endl;
        cout << "\t\t ENTER YOUR CHOICE" << endl;
        cin >> item;

        switch (item)
        {
        case '1':
            s.currentItemSelected = "  LIPTON ";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (LIPTON[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    LIPTON[i] = 200;
                }
            }

            if (LIPTON[0] >= quantity)
            {
                LIPTON[0] -= quantity;
                cout << quantity << "  LIPTON TEA added to the cart." << endl;
                s.bill += quantity * 900;
                cout << "YOUR BILL IS " << s.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '2':
            s.currentItemSelected = "VITAL";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (VITAL[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    VITAL[i] = 200;
                }
            }

            if (VITAL[0] >= quantity)
            {
                VITAL[0] -= quantity;
                cout << quantity << " VITAL TEA added to the cart." << endl;
                s.bill += quantity * 500;
                cout << "YOUR BILL IS " << s.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '3':
            s.currentItemSelected = "DANEDAR";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (DANEDAR[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    DANEDAR[i] = 200;
                }
            }

            if (DANEDAR[0] >= quantity)
            {
                DANEDAR[0] -= quantity;
                cout << quantity << " DANEDAR TEA added to the cart." << endl;
                s.bill += quantity * 750;
                cout << "YOUR BILL IS " << s.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '4':
            s.currentItemSelected = "TEZDUM";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (TEZDUM[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    TEZDUM[i] = 200;
                }
            }

            if (TEZDUM[0] >= quantity)
            {
                TEZDUM[0] -= quantity;
                cout << quantity << "TEZDUM TEA added to the cart." << endl;
                s.bill += quantity * 600;
                cout << "YOUR BILL IS " << s.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        default:
            cout << "Invalid choice." << endl;
            goto w;
        }
    }
    else if (choice == 'n' || choice == 'N')
    {
    p:
        cout << "\t\t\t NOODLES DETAILS" << endl;
        cout << "\t\t[1] KNOR => PRICE 300" << endl;
        cout << "\t\t[2] SHOOP=> PRICE 200" << endl;
        cout << "\t\t[3] MAGGI=> PRICE 100" << endl;
        cout << "\t\t[4] KELLOGG=> PRICE 600" << endl;
        cout << endl;
        cout << "\t\t ENTER YOUR CHOICE" << endl;
        cin >> item;

        switch (item)
        {
        case '1':
            s.currentItemSelected = " KNOR ";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (KNOR[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    KNOR[i] = 200;
                }
            }

            if (KNOR[0] >= quantity)
            {
                KNOR[0] -= quantity;
                cout << quantity << "  KNOR NODDLES added to the cart." << endl;
                s.bill += quantity * 300;
                cout << "YOUR BILL IS " << s.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '2':
            s.currentItemSelected = "SHOOP";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (SHOOP[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    SHOOP[i] = 200;
                }
            }

            if (SHOOP[0] >= quantity)
            {
                SHOOP[0] -= quantity;
                cout << quantity << " SHOOP NOODLES added to the cart." << endl;
                s.bill += quantity * 200;
                cout << "YOUR BILL IS " << s.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '3':
            s.currentItemSelected = " MAGGI";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (MAGGI[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    MAGGI[i] = 200;
                }
            }

            if (MAGGI[0] >= quantity)
            {
                MAGGI[0] -= quantity;
                cout << quantity << "  MAGGI NOODELS added to the cart." << endl;
                s.bill += quantity * 100;
                cout << "YOUR BILL IS " << s.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        case '4':
            s.currentItemSelected = "KELLOGG";
            cout << "\t\tENTER QUANTITY" << endl;
            cin >> quantity;
            if (KELLOGG[0] < s.restockThreshold)
            {
                for (int i = 0; i < 200; ++i)
                {
                    KELLOGG[i] = 200;
                }
            }

            if (KELLOGG[0] >= quantity)
            {
                KELLOGG[0] -= quantity;
                cout << quantity << "KELLOGG NOODLES added to the cart." << endl;
                s.bill += quantity * 600;
                cout << "YOUR BILL IS " << s.bill << endl;
            }
            else
            {
                cout << "Sorry, the requested quantity is not available!" << endl;
            }
            break;
        default:
            cout << "Invalid choice." << endl;
            goto p;
        }
    }
    else{
        cout<<"invalid choice"<<endl;
    }
}
