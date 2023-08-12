#include <iostream>

using namespace std;

int main()
{
    cout << "Bu dastur, 1 dan N gacha bo'lgan tub sonlarni ekranga chiqaradi.\n";

    int son;

    cout << "N ni kiriting: ";
    cin >> son;

    bool tub=(son>=2);

    for (int i=2; i<son/2; i++ ) {
        if (son%i==0) {
                tub=false;
                break;
        }
    }

    cout << "Siz kiritgan son " << (tub ? "tub son." : "tub son emas.");

    cout << endl;
    return 0;
}
