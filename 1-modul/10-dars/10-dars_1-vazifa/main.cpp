#include <iostream>

using namespace std;

int main()
{
    cout << "Bu dastur, siz kiritgan talabaning natijasini so’zlarda ifodalab beradi.\n";

    string natija = "";
    int son;


    cout << "Talabaning yig'gan balini kiriting(0...100):_";    cin >> son;

    cout << endl;

    if (son>0 && son<100) {

        int r1 = son%10, r10 = son/10;

        switch (r10){
            case 1 : {
                natija = "o'n ";
            }break;
            case 2 : {
                natija = "yigirma ";
            }break;
            case 3 : {
                natija = "O'ttiz ";
            }break;
            case 4 : {
                natija = "qirq ";
            }break;
            case 5 : {
                natija = "ellik ";
            }break;
            case 6 : {
                natija = "oltmish ";
            }break;
            case 7 : {
                natija = "yetmish ";
            }break;
            case 8 : {
                natija = "sakson ";
            }break;
            case 9 : {
                natija = "to'qson ";
            }break;
        }

        switch (r1){
            case 1 : {
                natija += "bir ";
            }break;
            case 2 : {
                natija += "ikki ";
            }break;
            case 3 : {
                natija += "uch ";
            }break;
            case 4 : {
                natija += "to'rt ";
            }break;
            case 5 : {
                natija += "besh ";
            }break;
            case 6 : {
                natija += "olti ";
            }break;
            case 7 : {
                natija += "yetti ";
                cout << "Talaba " << natija << " bal yig'gan.";
            }break;
            case 8 : {
                natija += "sakkiz ";
            }break;
            case 9 : {
                natija += "to'qqiz ";
            }break;
        }
        cout << "Talaba " << natija << " bal yig'gan.";
    }


    else if (son==100) {
        cout << "Talaba yuz bal yig'gan.";
    }

    else if (son==0) {
        cout << "Talaba hech qanday bal yig'a olmagan.";
    }

    else {
        cout << "Siz oraliqqa kirmaydigan son kiritdingiz. Iltimos, kiritgan soningizni tekshiring.";
    }


    cout << endl;
    return 0;
}
