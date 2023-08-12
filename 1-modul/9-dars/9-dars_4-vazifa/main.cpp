#include <iostream>

using namespace std;

int main()
{
    cout << "Bu dastur, siz kiritgan beshta son orasida nechta musbat, nechta manfiy, nechta nol qatnashganini\
 aniqlovchi dasturdir."<< endl << endl;

    int son1, son2, son3, son4, son5, manfiy=0, musbat=0, nol=0;

    cout << "1-sonni kiriting:_";
    cin >> son1;

    cout << "2-sonni kiriting:_";
    cin >> son2;

    cout << "3-sonni kiriting:_";
    cin >> son3;

    cout << "4-sonni kiriting:_";
    cin >> son4;

    cout << "5-sonni kiriting:_";
    cin >> son5;

    if (son1>0) {musbat++;}
    else if (son1<0) {manfiy++;}
    else {nol++;}

    if (son2>0) {musbat++;}
    else if (son2<0) {manfiy++;}
    else {nol++;}

    if (son3>0) {musbat++;}
    else if (son3<0) {manfiy++;}
    else {nol++;}

    if (son4>0) {musbat++;}
    else if (son4<0) {manfiy++;}
    else {nol++;}

    if (son5>0) {musbat++;}
    else if (son5<0) {manfiy++;}
    else {nol++;}

    cout << "Siz kiritgan sonlarni ichida " << musbat << " ta musbat, " << manfiy << " ta manfiy va "<< nol << " ta no'l sonlari bor\n";

    cout << endl;
    return 0;
}
