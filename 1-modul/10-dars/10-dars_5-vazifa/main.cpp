#include <iostream>

using namespace std;

int main()
{
    cout << "Bu dastur, siz kiritgan oyning kuniga bir kun qo'shib (kabisa yili bo'lmagan yil hisobida) konsolga chiqaradi.\n";

    int kun, oy;
    string oyNomi = "";

    cout << "Kunni kiriting:_";                       cin >> kun;
    cout << "Oy tartib raqamini kiriting:_";          cin >> oy;






    if (kun>0 && kun<31 && oy>0 && oy<=12 && oy!=2 && oy!=4 && oy!=6 && oy!=9 && oy!=11 ) {

            switch (oy) {
                case 1: {
                    oyNomi ="yanvar";
                    }break;
                case 3: {
                    oyNomi ="mart";
                    }break;
                case 5: {
                    oyNomi ="may";
                    }break;
                case 7: {
                    oyNomi ="iyul";
                    }break;
                case 8: {
                    oyNomi ="avgust";
                    }break;
                case 10: {
                    oyNomi ="oktyabr";
                    }break;
                case 12: {
                    oyNomi ="dekabr";
                    }break;
            }
            switch(kun) {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                case 9:
                case 10:
                case 11:
                case 12:
                case 13:
                case 14:
                case 15:
                case 16:
                case 17:
                case 18:
                case 19:
                case 20:
                case 21:
                case 22:
                case 23:
                case 24:
                case 25:
                case 26:
                case 27:
                case 28:
                case 29:
                case 30: {
                    kun = ++kun;
                }break;
            }
            cout << endl;
            cout << kun << "  " << oyNomi;
    }







    else if (oy==2 && kun>0 && kun<=28) {
        switch (oy) {
            case 2: {oyNomi = "fevral";} break;
            }
        switch (kun) {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
            case 16:
            case 17:
            case 18:
            case 19:
            case 20:
            case 21:
            case 22:
            case 23:
            case 24:
            case 25:
            case 26:
            case 27:{
                kun = ++kun;
            }break;
            default : {
                kun = 1;
                oyNomi = "mart";
            }break;
        }
        cout << endl;
        cout <<"Siz kiritgan kundan keyingi kun " << kun << "-" << oyNomi <<"dir.";
    }







    else if (kun>0 && kun<30 && oy>0 && oy<=12 && oy!=2) {
        switch (oy) {
                case 4: {
                    oyNomi ="aprel";
                    }break;
                case 6: {
                    oyNomi ="iyun";
                    }break;
                case 9: {
                    oyNomi ="sentabr";
                    }break;
                case 11: {
                    oyNomi ="noyabr";
                    }break;

            }
            switch(kun) {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                case 9:
                case 10:
                case 11:
                case 12:
                case 13:
                case 14:
                case 15:
                case 16:
                case 17:
                case 18:
                case 19:
                case 20:
                case 21:
                case 22:
                case 23:
                case 24:
                case 25:
                case 26:
                case 27:
                case 28:
                case 29:{
                    kun = ++kun;
                }break;
            }
            cout << endl;
            cout <<"Siz kiritgan kundan keyingi kun " << kun << "-" << oyNomi <<"dir.";
    }







    else if (kun==30 && oy==4 || oy==6 || oy==9 || oy==11 && oy!=2) {

        switch (kun) {case 30: {kun = 1;}break;}

        switch (oy){
            case 4: {
                oyNomi = "may";
                }break;
            case 6: {
                oyNomi = "iyul";
                }break;
            case 9: {
                oyNomi = "oktyabr";
                }break;
            case 11: {
                oyNomi = "dekabr";
                }break;
        }
        cout << endl;
        cout <<"Siz kiritgan kundan keyingi kun " << kun << "-" << oyNomi <<"dir.";
    }







    else if (kun==31 && oy==1 || oy==3 || oy==5 || oy==7 || oy==8 || oy==10 || oy==12 && oy!=2) {

        switch (kun) {case 31: {kun = 1;}break;}

        switch (oy) {
            case 1: {
                oyNomi = "fevral";
                }break;
            case 5: {
                oyNomi = "iyun";
                }break;
            case 7: {
                oyNomi = "avgust";
                }break;
            case 8: {
                oyNomi = "sentyabr";
                }break;
            case 10: {
                oyNomi = "noyabr";
                }break;
            case 12: {
                oyNomi = "yanvar";
                }break;
        }
        cout << endl;
        cout <<"Siz kiritgan kundan keyingi kun " << kun << "-" << oyNomi <<"dir.";
    }




    else {
        cout << endl;
        cout << "Siz mavjud bo'lmagan oyni yoki kunni kiritdingiz.";
    }

    cout << endl;
    return 0;
}
