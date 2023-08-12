#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    /*
    1) a="abc", b="xyz" bo値sa, natijaviy satr "axbycz" bo値adi;
    2) a="Hi", b="There" bo値sa, natijaviy satr "HTihere" bo値adi;
    3) a="xxxx", b="There" bo値sa, natijaviy satr "xTxhxexre" bo値adi.
    */

    string a="xxxx", b="There", result="";
    int sum=a.length()+b.length(), i=0;


    while (sum != result.length()) {
        if (i<a.length() && i<b.length()) {
            result += a.substr(i, 1);
            result += b.substr(i, 1);
        }

        else if (i<a.length()) {
            result += a.substr(i, 1);
        }

        else {
            result += b.substr(i, 1);
        }

        i++;
    }

    cout << result;

    cout << endl;
    return 0;
}
