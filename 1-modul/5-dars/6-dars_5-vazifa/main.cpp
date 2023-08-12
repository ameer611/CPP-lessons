#include <iostream>

using namespace std;

int main()
{
    float sonA = 2;
    cout << "O'zingiz hohlagan sonni kiriting:_";
    cin >> sonA;

    float sonB = sonA*sonA;
    float sonC = sonB*sonB;

    cout << endl;

    cout << sonA<< " ning to'rtinchi darajasi " << sonC << " ga teng." << endl;
    return 0;
}
