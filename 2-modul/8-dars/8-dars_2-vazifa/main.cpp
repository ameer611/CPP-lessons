#include <iostream>

using namespace std;

int main()
{
    /*
    1)  s="aaacodebbb" bo�lsa, natija: 1;
    2)	s="codexxcode" bo�lsa, natija: 2;
    3)	s= "cozexxcope" bo�lsa, natija: 2;
    4)	s="AAcodeBBcoleCCccoreDD" bo�lsa, natija: 3.
    */

    string s = "AAcodeBBcoleCCccoreDD";

    int counter = 0;

    for (int i = 0; i < s.length(); i++) {
        if (i + 3 <= s.length() && s[i] == 'c' && s[i + 1] == 'o' && s[i + 2] != 'd') {
            counter++;
            }

        else if (i + 2 <= s.length() && s[i] == 'c' && s[i + 1] == 'o') {
            counter++;
            }
    }

    cout << counter;

    cout << endl;
    return 0;
}
