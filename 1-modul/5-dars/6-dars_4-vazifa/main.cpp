#include <iostream>

using namespace std;

int main()
{
    cout << "Bu dastur, siz kiritgan ikki sonlar ustida turli xil arifmetik amallar bajaradi.\n\n";

    float son1;
    cout << "Birinchi sonni kiriting: _";
    cin >> son1;

    float son2;
    cout << "\nIkkinchi sonni kiriting: _";
    cin >> son2;

    cout << endl;

    cout << son1 << "+" << son2 << "=" << son1+son2 << endl;
    cout << son1 << "-" << son2 << "=" << son1-son2 << endl;
    cout << son1 << "*" << son2 << "=" << son1*son2 << endl;
    cout << son1 << "/" << son2 << "=" << son1/son2 << endl;


    return 0;
}
