#include <iostream>

using namespace std;

int main()
{
    /*
    1)	s="xHi" bo�lsa, natijada s="Hi" bo�ladi;
    2)	s="Hxi" bo�lsa, natijada s="Hi" bo�ladi;
    3)	s="Hi" bo�lsa, natijada s="Hi" bo�ladi;
    4)	s="xaxb" bo�lsa, natijada s="axb" bo�ladi.
    */

    string s="xxxasp", tekshir="x";
    string harf = s.substr(0, 2);

    /*
    for (int i=0; i<s.length(); i++) {
        s[i]=tolower(s[i]);
    }

    for (int i=0; i<tekshir.length(); i++) {
        tekshir[i]= tolower(tekshir[i]);
    }
    */

    int index1 = harf.find(tekshir);
    int index2 = harf.rfind(tekshir);

    if (index2==1) {
        s.erase(index2, 1);
    }

    if (index1==0) {
        s.erase(index1, 1);
    }

    cout << "s = " << s;

    cout << endl;
    return 0;
}
