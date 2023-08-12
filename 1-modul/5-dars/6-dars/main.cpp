#include <iostream>

using namespace std;

int main()
{
    cout << "Bu dastur, siz kiritgan sonning oxirgi raqamini konsolga chiqaradi." << endl << endl;

    int son;
    cout << "O'zingiz hohlagan sonni kiriting: \n-";
    cin >> son;

    cout << "Siz kiritgan sonning so'ngi raqami " << son%10 << " ga teng" << endl << endl;
    return 0;
}
