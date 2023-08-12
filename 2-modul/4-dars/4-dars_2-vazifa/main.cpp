#include <iostream>

using namespace std;

int main()
{
    cout << "3 ta sonning kattasini (if-else, ternary operatorlarini ishlatmasdan) topuvchi dastur.\n";

    float son, mak;

    cout << "1-sonni kiriting:_";   cin >> mak;

    for (int i=2; i<=3; i++) {
        cout << i << "-sonni kiriting:_";   cin >> son;
        mak=max(mak, son);
    }

    cout << "Siz kiritgan sonlarning eng kattasi " << mak << " sonidir.\n";

    cout << endl;
    return 0;
}
