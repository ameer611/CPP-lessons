#include <iostream>

using namespace std;

int main()
{
    //x, y, z sonlaridan istalgan bittasi qolgan ikkitasining yig�indisidan kichik
    cout << "Bu dastur, x, y, z sonlaridan istalgan bittasi qolgan ikkitasining yig�indisidan kichik ekanligini tekshiradi.\n\
    \n1 = x, y, z sonlaridan istalgan bittasi qolgan ikkitasining yig�indisidan kichik. \
    \n0 = x, y, z sonlaridan istalgan bittasi qolgan ikkitasining yig�indisidan kichik emas.\n\n";

    int x, y, z;

    cout << "x sonini kiriting:_";
    cin >> x;

    cout << endl;

    cout << "y sonni kiriting:_";
    cin >> y;

    cout << endl;

    cout << "z sonni kiriting:_";
    cin >> z;

    cout << endl;

    bool natija = ((x<y+z) || (y<x+z) || (z<x+y));

    cout << "Natija: " << natija;


    cout << endl;
    return 0;
}
