#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    // Masalan: a=“Salom” va b=“Olam”  bo’lsa, natija:  “SalomOlamOlamSalom”

    string a="Salom", b="Olam", result="";

    cout << "1-so'zni kiriting:_";
    getline(cin, a);

    cout << "2-so'zni kiriting:_";
    getline(cin, b);

    result= result.assign(a);
    result=result.append(b);
    result=result.append(b);
    result=result.append(a);

    cout << "Natija= " << result;

    cout << endl;
    return 0;
}
