#include <iostream>

using namespace std;

int main()
{
    cout << "Bu dastur, siz kiritgan son 20 dan kichik bo'lsa, shu sonning kvadratini,\
    \naks holda uning oxirgi raqamini ekranga chiqaruvchi dasturdir." << endl << endl;

    int son;
    cout << "O'zingiz hohlagan butun son kiriting:_";
    cin >> son;

    cout << endl;

    if (son<20) {
        cout << "Siz kiritgan sonning kvadrati " << son*son <<" soniga teng.\n";
    }

    else if (son>20) {
        cout << "Siz kiritgan sonning oxirgi raqami " << son%10 << " soniga teng.\n";
    }

    cout << endl;
    return 0;
}
