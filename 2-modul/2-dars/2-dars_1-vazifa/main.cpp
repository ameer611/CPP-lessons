#include <iostream>

using namespace std;

int main()
{
    cout << "Bu dastur, siz kiritgan songacha bo'lgan sonlarning kvadratini qo'shib konsolga chiqaradi.\n";

    int son, sum=0, bosh = 1;
    cout << "Sonni kiriting:_";     cin >> son;

    while (bosh<son) {
        sum=sum+bosh*bosh;
        bosh++;
    }


    cout << "Natija: " << sum << " ga teng.";




    cout << endl;
    return 0;
}
