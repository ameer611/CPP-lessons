#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    /*
     Masalan:
    1)	s="ab*cd" bo�lsa, natijada s="ad" bo�ladi;
    2)	s="sm*eilly" bo�lsa, natijada s="silly" bo�ladi;
    3)	s="sm**eil*ly" bo�lsa, natijada s="siy" bo�ladi.
    */

    string s = "sm*eilly";
    int i = 0;

    while (i < s.length()) {
        if (s[i] == '*' && s[i+1] == '*') {
            s = s.erase(i-1, 4);
            i -= 1;
        }

        else if (s[i] == '*') {
            s = s.erase(i-1, 3);
            i -= 1;
        }

        else {
            i += 1;
        }
    }









    //result = s.find("*");

    /*
    while (result>0 && result<s.length()) {

        s.erase(result-1, 3);
        result = s.find("*");
    }
    */

    cout << s;

    cout << endl;
    return 0;
}
