#include <iostream>

using namespace std;

int main()
{
    cout << "Bu dastur, siz kiritgan uchta sonni kamayish tartibida ekranga chiqaruvchi dasturdir." << endl;

    int son1, son2, son3, maksimal, minimal;

    cout << "1-sonni kiriting:_";
    cin >> son1;

    cout << "2-sonni kiriting:_";
    cin >> son2;

    cout << "3-sonni kiriting:_";
    cin >> son3;

    cout << endl;

    maksimal = son1;

    if (maksimal<son2) {
        maksimal = son2;
    }
    else if (maksimal<son3) {
        maksimal = son3;
    }

    minimal = son3;

    if (minimal>son2) {
        minimal = son2;
    }
    else if (minimal>son3) {
        minimal = son1;
    }


    int urtacha = ((son1+son2+son3)-(maksimal+minimal));

    cout << "Siz kiritgan sonlarning eng kattasi " << maksimal << " soniga teng.\n";
    cout << "Siz kiritgan sonlarning o'rtachasi  " << urtacha << " soniga teng.\n";
    cout << "Siz kiritgan sonlarning eng kichigi " << minimal << " soniga teng.\n";


    cout << endl;
    return 0;
}
