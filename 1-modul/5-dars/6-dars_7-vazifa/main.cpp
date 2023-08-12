#include <iostream>

using namespace std;

int main()
{
    cout << "Bu dastur, siz ikki kiritgan sonni taqqoslab konsolga chiqaradi." << endl;

    float son1, son2;

    cout << "Birinchi sonni kiriting:_";
    cin >> son1;

    cout << endl;

    cout << "Ikkinchi sonni kiriting:_";
    cin >> son2;

    cout << endl;

    cout << son1<< ">" << son2 << " -> " << (son1>son2) << endl;
    cout << son1<< ">=" << son2 << " -> " << (son1>=son2) << endl;
    cout << son1<< "<" << son2 << " -> " << (son1<son2) << endl;
    cout << son1<< "<=" << son2 << " -> " << (son1<=son2) << endl;
    cout << son1<< "==" << son2 << " -> " << (son1==son2) << endl;
    cout << son1<< "!=" << son2 << " -> " << (son1!=son2) << endl;


    return 0;
}
