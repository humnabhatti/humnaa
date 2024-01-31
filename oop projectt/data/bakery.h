
using namespace std;
class bakery
{
public:
    int CAKE[200];
    int CHOCLATE_CAKE[200];
    int VANILLA_CAKE[200];
    int CARAMEL_CAKE[200];
    int BROWNIES[200];
    int SIMPLE_BROWNIE[200];
    int FUDGE_BROWNIE[200];
    int COOKIES[200];
    int NUTELLA_COOKIE[200];
    int MARBEL_COOKIE[200];
    int BREAD[200];
    int CHICKEN_FILLED_BREAD[200];
    int ARABIAN_PIZZA[200];
    int DONUTS[200];
    int NUTELLA_FILLED_DONUTS[200];
    int CARAMEL_FILLED[200];
    int UNFILLED_NUTELLA_TOPPED[200];
    int NUTELLA_TOPPED_DONUTS[200];
    int UNFILLED_CARAMEL_TOPPED[200];
    void cake(char item);
    void brownies(char item);
    void cookies(char item);
    void donuts(char item);
    void freshitems(char item);
    void pieordie();
    bakery();
    void physicalpieordie();
};