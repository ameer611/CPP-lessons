#include <iostream>

using namespace std;

int main()
{
    cout << "Bu dastur, Siz kiritgan uch xonali sonni juft son ekanligini tekshiruvchi dasturdir.\n\n";
    cout << "1 = uch xonali son.\n0 = uch xonali son emas.\n\n";

    int son;
    cout << "Uch xonali son kiriting:_";
    cin >> son;

    cout << endl;

    bool natija = ( son>99 && son<1000 && son%2==0 );


    cout << "Natija: " << natija;


    cout << endl;
    return 0;
}
