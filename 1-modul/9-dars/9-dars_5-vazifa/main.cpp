#include <iostream>

using namespace std;

int main()
{
    cout << "Bu dastur, siz kiritgtan x ; y nuqtani Dekar sistemasida qaysi chorakda yotishini aniqlovchi dasturdir.\n\n";

    int x, y;

    cout << "x sonni kiriting:_";    cin >> x;
    cout << "y sonni kiriting:_";    cin >> y;

    cout << endl;

    if (x>0 && y>0) {cout << "Siz kiritgan nuqta 1-chorakda yotadi.\n";}
    else if (x<0 && y>0) {cout << "Siz kiritgan nuqta 2-chorakda yotadi.\n";}
    else if (x<0 && y<0) {cout << "Siz kiritgan nuqta 3-chorakda yotadi.\n";}
    else if (x>0 && y<0) {cout << "Siz kiritgan nuqta 4-chorakda yotadi.\n";}
    else {cout << "Siz kiritgan nuqta hech qanday chorakda yotmaydi.\n";}

    cout << endl;
    return 0;
}
