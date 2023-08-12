#include <iostream>

using namespace std;

int main()
{
    cout << "Bu dastur, siz kiritgan  A va B sonlari orasida joylashgan C ga\
 karrali sonlarni ekranga chiqaradi.\n";

    int a, b, c, son=0;

    cout << "A sonini kiriting:_";   cin >> a;
    cout << "B sonini kiriting:_";   cin >> b;
    cout << "C sonini kiriting:_";   cin >> c;

    while (a<b) {
        if (a%c==0) {
            cout << "Natija: " << a << " soni " << c << " soniga qoldiqsiz bo'linadi.\n";
        }
        a++;
    }
    while (a>b) {
        if (a%c==0) {
            cout << "Natija: " << a << " soni " << c << " soniga qoldiqsiz bo'linadi.\n";
        }
        a--;
    }

    cout << endl;
    return 0;
}
