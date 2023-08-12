#include <iostream>

using namespace std;

int main()
{
    float sonA = 2;
    cout << "O'zingiz hohlagan sonni kiriting:_";
    cin >> sonA;

    float sonB = sonA*sonA*sonA;
    float sonC = sonB*sonB;

    cout << endl;

    cout << sonA<< " ning oltinchi darajasi " << sonC << " ga teng." << endl;
    return 0;
}
