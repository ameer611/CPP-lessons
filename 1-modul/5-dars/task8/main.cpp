#include <iostream>

using namespace std;

int main()
{
    cout << "Bu dastur, siz kiritgan uch xonali sonning o’nliklar xonasidagi raqam bilan yuzliklar \
    xonasidagi raqamni almashtirishdan hosil bo’lgan sonni chiqaradi.\n" << endl;

    int son;
    cout << "Uch xonali son kiriting: \n-";
    cin >> son;

    float r1 = son/100;
    int r2 = son%100;
    float r3 = r2/10;
    int r4 = r2%10;
    float natija = r3*100+r1*10+r4;

    cout << "\nSiz kiritgan sonning natijasi "<< natija << " soniga teng." << endl << endl;

    return 0;
}
