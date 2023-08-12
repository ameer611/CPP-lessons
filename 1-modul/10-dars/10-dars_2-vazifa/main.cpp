#include <iostream>

using namespace std;

int main()
{
    cout << "Bu dastur, biror oyning tartib raqami kiritilganda, shu oyda necha kun borligini ekranga chiqarardi.\n";

    int oy, son;
    cout << "Oyning tartib raqamini kiriting(1...12):_";    cin >> oy;

    cout << endl;

    if (oy>0 && oy<=12 && oy!=2) {
        switch (oy) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:{
                    son = 31;
            }break;
            case 4:
            case 6:
            case 9:
            case 11:{
                    son = 30;
            }break;
        }
        cout << "Yilning " << oy <<"-oyida "<< son << " kun bor.";
    }

    else if (oy==2) {
        cout << "Yilning kabisa yoki kabisa bo'lmasligiga qarab fevral oyida 28 yoki 29 kun bo'ladi.";
    }

    else {
        cout << "Siz noto'g'ri raqam kiritdingiz, iltimos kiritgan soningizni tekshiring.";
    }

    cout << endl;
    return 0;
}
