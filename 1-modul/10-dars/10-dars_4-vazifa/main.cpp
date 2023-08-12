#include <iostream>

using namespace std;

int main()
{
    cout << "Bu dastur, siz kiritgan raqamni so'zlar bilan ifodalab beradi.\n";


    string natija = "";
    int son;


    cout << "O'zingiz hohlagan natural sonni kiriting(1...999):_";    cin >> son;

    cout << endl;

    if (son>0 && son<1000) {

        int r1 = son%10;
        int r100 = son/100;
        int r10 = (son/10)%10;

        switch (r100){
            case 1 : {
                natija = " bir yuz ";
            }break;
            case 2 : {
                natija = " ikki yuz ";
            }break;
            case 3 : {
                natija = " uch yuz ";
            }break;
            case 4 : {
                natija = " to'rt yuz ";
            }break;
            case 5 : {
                natija = " besh yuz ";
            }break;
            case 6 : {
                natija = " olti yuz ";
            }break;
            case 7 : {
                natija = " yetti yuz ";
            }break;
            case 8 : {
                natija = " sakkiz yuz ";
            }break;
            case 9 : {
                natija = " to'qqiz yuz ";
            }break;
        }

        switch (r10){
            case 1 : {
                natija += " o'n ";
            }break;
            case 2 : {
                natija += " yigirma ";
            }break;
            case 3 : {
                natija += " O'ttiz ";
            }break;
            case 4 : {
                natija += " qirq ";
            }break;
            case 5 : {
                natija += " ellik ";
            }break;
            case 6 : {
                natija += " oltmish ";
            }break;
            case 7 : {
                natija += " yetmish ";
            }break;
            case 8 : {
                natija += " sakson ";
            }break;
            case 9 : {
                natija += " to'qson ";
            }break;
        }

        switch (r1){
            case 1 : {
                natija += " bir ";
            }break;
            case 2 : {
                natija += " ikki ";
            }break;
            case 3 : {
                natija += " uch ";
            }break;
            case 4 : {
                natija += " to'rt ";
            }break;
            case 5 : {
                natija += " besh ";
            }break;
            case 6 : {
                natija += " olti ";
            }break;
            case 7 : {
                natija += " yetti ";
            }break;
            case 8 : {
                natija += " sakkiz ";
            }break;
            case 9 : {
                natija += " to'qqiz ";
            }break;
        }
        cout << son << " soni so'zlarda <<" << natija << ">> deb ifodalanadi.\n";
    }

    else {
        cout << "Siz oraliqqa kirmaydigan son kiritdingiz. Iltimos, kiritgan soningizni tekshiring.";
    }




    cout << endl;
    return 0;
}
