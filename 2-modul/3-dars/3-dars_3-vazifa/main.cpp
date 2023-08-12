#include <iostream>

using namespace std;

int main()
{
    int son;
    cout << "Sonni kiriting:_";
    cin >> son;

    for (int i = 1; i <= son; i++) {

        for (int j = 0; j < son - i; j++) {
        cout << "  ";
        }

        for (int j = 0; j < i; j++) {
        cout << " * ";
        }

    cout << endl;

    }

    cout << endl;
    return 0;
}
