#include <iostream>

using namespace std;

//Berilgan 3 ta sonning o’rta arifmetigini 4-darajaga oshirib, natija sifatida qaytaruvchi funksiya tuzing.

float urtaArifmetikDaraja (float son1, float son2, float son3) {
    int daraja4 = (son1+son2+son3)/3;
    return daraja4*daraja4*daraja4*daraja4;
}

int main()
{
    cout << "Bu dastur, siz kiritgan 3 ta haqiqiy sonning o'rta arifmetigini 4-darajaga oshirib, natija sifatida qaytaradi. \n\n";

    float n1, n2, n3;
    cout << "1-sonni kiriting:_";     cin >> n1;
    cout << "2-sonni kiriting:_";     cin >> n2;
    cout << "3-sonni kiriting:_";     cin >> n3;

    cout << endl;

    cout << "Natija: " << urtaArifmetikDaraja (n1,n2,n3);

    cout << endl;
    return 0;
}
