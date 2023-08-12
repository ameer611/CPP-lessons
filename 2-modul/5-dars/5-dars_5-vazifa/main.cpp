#include <iostream>

using namespace std;

//Berilgan 4 ta haqiqiy sonning eng katta va eng kichigini yig'indisini hisoblab natija sifatida qaytaruvchi funksiya tuzing.

float findsum (float n1, float n2, float n3, float n4) {
    float katta, kichik;
    katta = max(max(n1, n2), max(n3, n4));
    kichik = min(min(n1, n2), min(n3, n4));
    return katta+kichik;
}

int main()
{
    cout << "Bu dastur, siz kiritgan 4 ta haqiqiy sonning eng katta va eng kichigini yig'indisini hisoblab natija sifatida qaytaradi.\n\n";

    float n1, n2, n3, n4;

    cout << "1-sonni kiriting:_";     cin >> n1;
    cout << "2-sonni kiriting:_";     cin >> n2;
    cout << "3-sonni kiriting:_";     cin >> n3;
    cout << "4-sonni kiriting:_";     cin >> n4;

    cout << "Natija: " << findsum(n1, n2, n3, n4);

    cout << endl;
    return 0;
}
