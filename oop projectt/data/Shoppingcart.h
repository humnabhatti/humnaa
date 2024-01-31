
using namespace std;
class Shoppingcart
{
public:
    int APPLE[200];
    int SAMSUNG[200];
    int VIVO[200];
    int NOKIA[200];
    int MAC[200];
    int DELL[200];
    int LENOVO[200];
    int HP[200];

    vector<CartItem> cart;
    vector<string> cartItems;
    vector<string> wishlists;
    vector<wishlist> wish;
    float bill = 0;
    const int restockThreshold = 50;
    string currentItemSelected;

    void addToCart(string itemName, float itemPrice, int quantity);
    void addToBill(string itemName, float itemPrice, int quantity);
    void refund();
    void deleteCartItem(int index);
    void displayCartItemsFromFile();
    void addTowishlist(string itemName, float itemPrice, int quantity);
    void displaywishlistFromFile();
    void viewMOBILE(char item);
    void viewLAPTOP(char item);
    float calculateTotal();
    Shoppingcart();
    void displayMobileDetails();
    void electronics();
    void physicalElectronics();
    void GOLDEN_customer();
    void SILVER_customer();
 void PLATINUM_customer();
};