#include <iostream>

using namespace std;

int main()
{
    cout << "Bu dastur, siz kiritgan ikkita sonning avval kichigini, keyin kattasini ekranga chiqaruvchi dasturdir." << endl;

    float son1, son2;

    cout << "1-sonni kiriting:_";
    cin >> son1;

    cout << "2-sonni kiriting:_";
    cin >> son2;

    cout << endl;

    if (son1<son2) {
        cout << "Siz kiritgan sonning kichigi " << son1 << " ga teng.\n";
        cout << "Siz kiritgan sonning kattasi esa " << son2 << " ga teng.";
    }

    else if (son1>son2) {
        cout << "Siz kiritgan sonning kichigi " << son2 << " ga teng.\n";
        cout << "Siz kiritgan sonning kattasi " << son1 << " ga teng.";
    }

    cout << endl;
    return 0;
}
