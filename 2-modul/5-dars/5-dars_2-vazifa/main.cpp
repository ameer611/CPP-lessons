#include <iostream>

using namespace std;

//Berilgan sonning toq yoki juftligini aniqlab, u juft bo’lsa kvadratini,
//aks holda kubini natija sifatida qaytaruvchi funksiya tuzing.

int findNumType (int num) {
    if (num%2==0) {
        return num*num;
    }
    return num*num*num;
}

int main()
{
    cout << "Bu dastur, siz kiritgan sonning toq yoki juftligini aniqlab, u juft bo’lsa kvadratini,\
    aks holda kubini natija sifatida qaytaradi.\n";

    int son;
    cout << "Sonni kiriting:_";     cin >> son;

    cout << endl;

    cout << findNumType(son) << endl;




    cout << endl;
    return 0;
}
