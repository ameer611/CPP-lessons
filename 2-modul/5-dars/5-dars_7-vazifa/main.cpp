#include <iostream>

using namespace std;

//Berilgan 3 ta sonni kamayish tartibida ekranga chiqaruvchi funksiya tuzing.

void bigToSmall (int son1, int son2, int son3) {
    int katta, kichik, urta;
    katta = max(max(son1, son2), son3);
    kichik = min(min(son1, son2), son3);
    urta = (son1+son2+son3)-(katta+kichik);
    cout << katta << ", " << urta << ", " << kichik << "." << endl;
}

int main()
{
    cout << "Bu dastur, siz kiritgan 3 ta sonni kamayish tartibida ekranga chiqaradi.\n\n";

    int n1, n2, n3;

    cout << "1-sonni kiriting:_";     cin >> n1;
    cout << "2-sonni kiriting:_";     cin >> n2;
    cout << "3-sonni kiriting:_";     cin >> n3;

    cout << endl;

    bigToSmall(n1, n2, n3);

    cout << endl;
    return 0;
}
