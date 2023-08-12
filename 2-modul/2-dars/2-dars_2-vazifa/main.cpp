#include <iostream>

using namespace std;

int main()
{
    cout << "Bu dastur, 1 dan N gacha bo’lgan butun sonlar orasida 3 ga karrali, ammo 5 ga karrali bo’lmagan butun sonlarni ekranga chiqaradi.\n";


    int num, son=1;
    cout << "N ni kiriting:_";     cin >> num;

    while (son<num) {
        if (son%3==0 && son%5!=0){
            cout << son << "    bu son 3 ga karrali ammo 5 ga karrali emas.\n";
        }
        son++;
    }

    cout << endl;
    return 0;
}
