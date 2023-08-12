#include <iostream>

using namespace std;

//Berilgan butun son 5 ga qo値diqsiz bo値insa true, aks holda false qiymatini qaytaruvchi funksiya tuzing.

bool qoldiqsiz5 (int son) {
    if (son%5==0) {
        return true;
    }
    return false;
}

int main()
{
    cout << "Bu dastur, siz kiritgan son 5 ga qo値diqsiz bo値insa true, aks holda false qiymatini qaytaradi.\n";

    int num;
    cout << "Sonni kiriting:_";     cin >> num;

    cout << endl;

    cout << qoldiqsiz5(num);

    cout << endl;
    return 0;
}
