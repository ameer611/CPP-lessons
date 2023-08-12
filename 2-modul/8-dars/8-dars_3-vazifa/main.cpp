#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    /*
     Masalan:
    1)	s="ab*cd" bo値sa, natijada s="ad" bo値adi;
    2)	s="sm*eilly" bo値sa, natijada s="silly" bo値adi;
    3)	s="sm**eil*ly" bo値sa, natijada s="siy" bo値adi.
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
