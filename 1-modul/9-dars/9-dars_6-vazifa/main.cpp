#include <iostream>

using namespace std;

int main()
{
    cout << "Bu dastur, siz kiritgan uchta sonning ikkitasini qo'shish orqali hosil bo'lgan eng katta ikkita sonni konsolga chiqaradi.\n";

    float son1, son2, son3, n1, n2, n3, mak, kich, urta;

    cout << "1-sonni kiriting:_"; cin >> son1;
    cout << "2-sonni kiriting:_"; cin >> son2;
    cout << "3-sonni kiriting:_"; cin >> son3;

    n1 = son1+son2;
    n2 = son1+son3;
    n3 = son3+son2;

    mak = n1;
    if (mak<n2) {mak=n2;}
    if (mak<n3) {mak=n3;}

    kich = n1;
    if (kich>n2) {mak=n2;}
    if (kich>n3) {mak=n3;}

    urta = (n1+n2+n3)-(mak+kich);

    cout << "Natija: " << mak << " va " << urta;
    cout << endl;
    return 0;
}
