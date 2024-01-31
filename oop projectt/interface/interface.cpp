#include "../master_header.h"

#include "interface_header.h"

void interfacee::draw()
{
    cout << "***********************************************" << endl;
    cout << "    //////     //        //    //      //    //" << endl;
    cout << "  //       //  // //  // //    // //   //    //" << endl;
    cout << " //        //  //    //  //    //   // //    //" << endl;
    cout << " //       //   //        //    //     //     //" << endl;
    cout << "   //////      //        //    //     //     //" << endl;
    cout << "*************************************************" << endl;
    cout << "\t\t\tMARKET" << endl;

    cout << "\n\t\t\t\t\t                      /*";
    cout << "\n\t\t\t\t\t\t     ________/";
    cout << "\n\t\t\t\t\t\t    |       /\t";
    cout << "\n\t\t\t\t\t[           |      /\t     ]";
    cout << "\n\t\t\t\t\t\t    |_____/\t" << endl;
    cout << "\t\t\t\t\t\t    *     * " << endl;
}
void interfacee::data()
{
    string b;
    string category;

    cout << "__________________________________________________________________________" << endl;
    cout << "\tDO YOU WANT TO SHOP ONLINE(PRESS 2) OR PHYSICAL(PRESS 1)" << endl;
    cout << "__________________________________________________________________________" << endl;
    cin >> b;
    mainn k;
    if (b == "1")
    {
        k.make2();
    }
    else if (b == "2")
    {
        k.mainfunc();
    }
    else
    {
        cout << "invalid option" << endl;
        data();
    }
}