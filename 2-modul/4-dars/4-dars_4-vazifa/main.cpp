#include <iostream>
#include <cctype>
#include <math.h>

using namespace std;

int main()
{
    string s="HellO woRLd", kichHarf=" ", kattHarf=" ";


    for (int i=0; i<s.length(); i++) {

        if (islower(s[i])) {
            kichHarf+=s[i];
        }

        else if(isupper(s[i])) {
            kattHarf+=s[i];
        }
    }

    cout << kichHarf << endl;
    cout << kattHarf << endl;

    cout << endl;
    return 0;
}
