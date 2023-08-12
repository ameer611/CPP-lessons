#include <iostream>

using namespace std;

int main()
{
    cout << "Bu dastur, siz kiritgan yilning kunini qaysi hafta kuniga to'g'ri kelishini konsolga chiqaradi(1-yanvar duyshanba hisobida).\n\n";

    string haftaKuni = "";
    int yilKuni, qoldiq;
    cout << "Yilning kunini kiriting(1...365):_";    cin >> yilKuni;

    cout << endl;

    qoldiq = yilKuni%7;

    if (yilKuni>=1 && yilKuni<=365) {
        switch (qoldiq) {
            case 1: {
                haftaKuni = "duyshanba";
            }break;
            case 2: {
                haftaKuni = "seshanba";
            }break;
            case 3: {
                haftaKuni = "chorshanba";
            }break;
            case 4: {
                haftaKuni = "payshanba";
            }break;
            case 5: {
                haftaKuni = "juma";
            }break;
            case 6: {
                haftaKuni = "shanba";
            }break;
            case 0: {
                haftaKuni = "yakshanba";
            }break;
        }
        cout << "Yilning " << yilKuni << "-kuni haftaning " << haftaKuni << " kuniga to'g'ri keladi.";
    }

    else {
        cout << "Siz tegishli oraliqda bo'lmagan son kiritdingiz.";
    }

    cout << endl << endl;
    return 0;
}
