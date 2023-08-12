#include <iostream>

using namespace std;

int main()
{
    int son;
    char ch;
    cout << "Son kiriting(1...26): ";
    cin >> son;

    if (son>0 && son<27) {

         for (int i = 1; i <= son; i++) {

            for (int j = 0; j < son - i; j++) {
                cout << " ";
            }

            for (ch = 'A'; ch <= ('A' + i - 1); ch++) {
                cout << ch;
            }

            for (ch = ('A' + i - 2); ch >= 'A'; ch--) {
                cout << ch;
            }

            cout << endl;
        }

    }

    else {
        cout << "Siz noto'g'ri oraliqdagi son kiritdingiz.";
    }
    cout << endl;
    return 0;
}
