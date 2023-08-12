#include <iostream>

using namespace std;

int main()
{
    cout << "Bu dastur, siz kiritgan sonni manfiy yoki musbat va toq yoki juft ekanligini konsolga chiqaradi.\n";

    string natija ="";

    int son;
    cout << "Sonni kiriting:_";    cin >> son;

    if  (son==0) {
        cout << "Bu son no'l";
    }

    else {
        if (son<0){
                natija ="Bu manfiy ";
            }
            else {
                natija ="Bu musbat ";
        }

        if (son%2==0) {
            natija = natija+"juft son";
        }

        else {
            natija = natija+"toq son";
        }

    }

    cout << endl;

    cout << natija;

    cout << endl;
    return 0;
}
