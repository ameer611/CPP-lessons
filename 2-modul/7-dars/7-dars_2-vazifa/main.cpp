#include <iostream>

using namespace std;

int main()
{
    // Masalan: s1="Salom", s2="Olam" =>  natija: "SalomOlamSalom".

    string a="Salom", b="Olam", result="";

    cout << "1-so'zni kiriting:_";
    getline(cin, a);

    cout << "2-so'zni kiriting:_";
    getline(cin, b);

    if (a.length()>b.length()) {
        cout << a << b << a << endl;
    }
    else {
        cout << b << a << b << endl;
    }

    cout  << endl;
    return 0;
}
