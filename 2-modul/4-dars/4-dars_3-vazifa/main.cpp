#include <iostream>

using namespace std;

int main()
{
    cout << "3 ta sonning kattasini (if-else, ternary operatorlarini ishlatmasdan) o'sish tartibida ekranga chiqaruvchi dastur.\n";

    float son, mak, kich, sum;

    cout << "1-sonni kiriting:_";   cin >> mak;

    sum=mak;

    for (int i=2; i<=3; i++) {
        cout << i << "-sonni kiriting:_";   cin >> son;
        kich=min(mak, son);
        mak=max(mak, son);
        sum+=son;
    }

    cout << "Siz kiritgan sonlarning eng kattasi " << mak << " sonidir.\n";
    cout << "Siz kiritgan sonlarning o'rtachasi " << (sum-(mak+kich)) << " sonidir.\n";
    cout << "Siz kiritgan sonlarning eng kichkinasi " << kich << " sonidir.\n";

    cout << endl;
    return 0;
}
