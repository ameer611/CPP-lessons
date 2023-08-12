#include <iostream>

using namespace std;

int main()
{
    int son;
    cout << "Sonni kiriting: ";
    cin >> son;

    int i, j;
    for (i = 1; i <= son; i++) {
        for (j = 0; j < son - i; j++) {
            cout << " ";
        }

        for (j = 1; j <= i; j++) {
            cout << j;
        }

        for (j = i - 1; j >= 1; j--) {
            cout << j;
        }

        cout << endl;
    }


    cout << endl;
    return 0;
}
