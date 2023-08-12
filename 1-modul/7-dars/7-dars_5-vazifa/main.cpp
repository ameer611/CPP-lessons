#include <iostream>

using namespace std;

int main()
{
    cout << "x, y, z sonlaridan faqat bittasi musbat son ekanligini konsolga chiqaradi" << endl << endl;


    float x, y, z;

    cout << "x sonni kiriting:_";
    cin >> x;

    cout << endl;

    cout << "y sonni kiriting:_";
    cin >> y;

    cout << endl;

    cout << "z sonni kiriting:_";
    cin >> z;

    cout << endl;

    if ((x>0 && y<0 && z<0) || (x<0 && y>0 && z<0) || (x<0 && y<0 && z>0)) {
        cout << "Siz kiritgan x, y, z sonlaridan faqat bittasi musbat sondir. ";
    }

    else {
        cout << "Siz kiritgan x, y, z sonlarining barchasi yoki ikkitasi musbat sondir.";
    }

    cout << endl;
    return 0;
}
