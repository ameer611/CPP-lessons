#include <iostream>

using namespace std;

//Berilgan 3 ta sonning o’sish tartibida joylashgandagi o’rtadagisini aniqlab natija sifatida qaytaruvchi funksiya tuzing.
//Masalan: findMedium(100, 50, 75) = 75

int findMedium (int son1, int son2, int son3) {
    int katta, kichik;
    katta = max(max(son1, son2), son3);
    kichik = min(min(son1, son2), son3);
    return (son1+son2+son3)-(katta+kichik);
}

int main()
{
    cout << "Bu dastur, siz kiritgan 3 ta sonning o’sish tartibida joylashgandagi o’rtadagisini aniqlab natija sifatida qaytaradi. \n\n";

    int n1, n2, n3;

    cout << "1-sonni kiriting:_";     cin >> n1;
    cout << "2-sonni kiriting:_";     cin >> n2;
    cout << "3-sonni kiriting:_";     cin >> n3;

    cout << endl;

    cout << "Natija: " << findMedium(n1, n2, n3);

    cout << endl;
    return 0;
}
