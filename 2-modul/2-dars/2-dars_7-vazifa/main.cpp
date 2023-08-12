#include <iostream>

using namespace std;

int main()
{
    /*Foydalanuvchi tomonidan butun sonlar kiritilaveradi. Bu jarayon manfiy
    son kiritilguncha davom etadi. Shu sonlarning ichida nechtasi 5 ga
    karrali ekanligini aniqlovchi dastur tuzing*/

    cout << "Bu dastur, siz kiritgan sonlarni nechtasi 5 ga karrali ekanligini konsolga chiqradi (va manfiy son kiritilsa dastur yakunlanadi.\n";

    int son=0, sanash = 0;

    while (son>=0) {
        cout << "Sonni kiting:_";   cin >> son;
        if (son%5==0 && son>0) {
            sanash++;
        }
    }

    cout << endl;

    cout << "Siz kiritgan sonlar ichida " << sanash << " ta 5 karrali son mavjud.";

   cout << endl;
    return 0;
}
