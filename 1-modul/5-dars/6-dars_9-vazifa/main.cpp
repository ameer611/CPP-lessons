#include <iostream>

using namespace std;

int main()
{
    cout << " Bu dastur, talabaning  imtihondan yig'gan balining foiz ko'rsatkichlarini konsolga chiqaradi.\n\n";

    int N1;
    cout << "Talabaning birinchi fandan yechgan to'g'ri javoblari sonini kiriting:_";
    cin >> N1;

    float M1;
    cout << "\nBirinchi fandan har bir to'g'ri javob uchun talabaga necha bal berilishini kiriting:_";
    cin >> M1;

    cout << endl;

    int N2;
    cout << "Talabaning ikkinchi fandan yechgan to'g'ri javoblari sonini kiriting:_";
    cin >> N2;

    float M2;
    cout << "\nIkkinchi fandan har bir to'g'ri javob uchun talabaga necha bal berilishini kiriting:_";
    cin >> M2;

    cout << endl;

    float F;
    cout << "Talaba qo'shimcha imtiyozlarga ega bo'lsa, imtiyozning foizini kiriting:_";
    cin >> F;

    cout << "\n\nTalabaning imtihonda yig'gan bali " << (N1*M1+N2*M2)*(100+F)/100 << " ga teng"<< endl;
    return 0;
}
