#include <iostream>

using namespace std;

int main()
{
    cout << "Bu dastur, siz kiritgan (faqat) ikki xonali sonning raqamlari o’rnini almashtirib beradi." << endl << endl;

    int son;
    cout << "Ikki xonali son kiriting: \n-";
    cin >> son;

    float r1 = son%10;
    float r2 = son/10;
    int natija = r1*10+r2;

    cout << "Siz kiritgan sonning hadlari almashinuvidan " << natija << " soni kelib chiqadi." << endl << endl;

    return 0;
}
