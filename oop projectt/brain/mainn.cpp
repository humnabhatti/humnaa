#include "../master_header.h"
#include "brain_header.h"

void mainn::mainfunc()
{
    string a;
    // void make();

    cout << (a == "1" ? "-> sign up " : "  sign up ") << endl;
    cout << (a == "2" ? "-> login   " : "  log in  ") << endl;
    cout << "PRESS 1 FOR SIGN UP/2 FOR LOGIN" << endl;

    cin >> a;

    sign_up user;

    if (a == "1")
    {
        cout << "\t\t\t\t\t\t======================" << endl
             << endl;
        cout << "\t\t\t\t\t\t  ~~~~~SIGN UP~~~~~" << endl
             << endl;
        cout << "\t\t\t\t\t\t======================" << endl
             << endl;
        cout << "Sign Up:" << endl;
        user.getdata();

        make();
    }
    else if (a == "2")
    {
    F:
       
        cout << "\t\t\t\t\t\t======================" << endl
             << endl;
        cout << "\t\t\t\t\t\t  ~~~~~LOG IN~~~~~" << endl
             << endl;
        cout << "\t\t\t\t\t\t======================" << endl
             << endl;
        cout << "Log In:" << endl;
        login user;
        user.authentic();
        Shoppingcart t;
        
        string choice;
    G:
        cout << "Login Successful!" << endl;
        cout << "a. View Cart Items" << endl;
        cout << "b. View Wishlist" << endl;
        cout << "c. go for shop" << endl;
        cout << "d. refund somthing" << endl;
        cout << "Choose an option: ";
        cin >> choice;

        if (choice == "a")
        {
            t.displayCartItemsFromFile();
        }
        else if (choice == "b")
        {
            t.displaywishlistFromFile();
        }
        else if (choice == "c")
        {

            make();
        }
        else if (choice == "d")
        {
            t.refund();
        }
        else
        {
            cout << "Invalid choice!" << endl;
            goto G;
        }
    }
    goto F;
}
void mainn::make()
{
    string category;
    while (true)
    {
        cout << "\t\t\tFROM WHERE DO YOU WANT TO SHOP" << endl;
        cout << "\t\t\t PRESS 1 FOR ELECTRIC CENTER" << endl
             << "\t\t\t PRESS 2 FOR GROCERY CENTER " << endl
             << "\t\t\t PRESS 3 for MAKEUP CENTER" << endl
             << "\t\t\t PRESS 4 for FRESH BAKE CENTER" << endl
             << "\t\t\t PRESS 5 for WASHROOM EQUIPMENT  CENTER" << endl
             << "\t\t\t PRESS 6 to EXIT" << endl;
        cin >> category;
        if (category == "1")
        {
            Shoppingcart e;
            e.electronics();
        }
        else if (category == "2")
        {
            household h;
            h.grocery();
        }
        else if (category == "3")
        {
            makeover m;
            m.makeup();
        }
        else if (category == "4")
        {
            bakery b;
            b.pieordie();
        }
        else if (category == "5")
        {
            washroom w;
            w.washroom_equipments();
        }

        else if (category == "6")
        {
            system("cls");
            mainfunc();
        }
    }
}
void mainn::make2()
{
    string category;
    while (true)
    {

        cout << "\t\t\tFROM WHERE DO YOU WANT TO SHOP" << endl;
        cout << "\t\t\t PRESS 1 FOR ELECTRIC CENTER" << endl
             << "\t\t\t PRESS 2 FOR GROCERY CENTER " << endl
             << "\t\t\t PRESS 3 for MAKEUP CENTER" << endl
             << "\t\t\t PRESS 4 for FRESH BAKE CENTER" << endl
             << "\t\t\t PRESS 6 to EXIT" << endl;

        cin >> category;
        if (category == "1")
        {
            Shoppingcart e;
            e.physicalElectronics();
        }
        else if (category == "2")
        {
            household h;
            h.physicalGrocery();
        }
        else if (category == "3")
        {
            makeover m;
            m.physicalMakeup();
        }
        else if (category == "4")
        {
            bakery b;
            b.physicalpieordie();
        }

        else if (category == "6")
        {
            system("cls");
            mainfunc();
        }
        else
        {
            cout << "invalid choice" << endl;
        }
    }
}