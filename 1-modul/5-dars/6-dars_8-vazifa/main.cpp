#include <iostream>

using namespace std;

int main()
{
    cout << "Bu dastur siz kiritgan ikki o'zgaruvchilarni o'rnini alishtirib konsolga chiqaradi.\n\n";

    int a=15, b=28;
    cout << "a o'zgaruvchini kiriting:_ ";
    cin >> a;

    cout << endl;

    cout << "b o'zgaruvchini kiriting:_";
    cin >> b;

    cout << endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "a o'zgaruvchi "<< a << " ga teng." << endl << "b o'zgaruvchi " << b << " ga teng." << endl;

    return 0;
}
