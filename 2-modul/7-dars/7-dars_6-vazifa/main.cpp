#include <iostream>

using namespace std;

int main()
{
    // Masalan s=“satr” bo’lsa, natija: “satrsatrsatrsatr”

    string a="Salom", result="";

    cout << "So'zni kiriting:_";
    getline(cin, a);

    for (int i=1; i<=a.length(); i++ ) {
        result+=a;
    }

    cout << result;

    cout << endl;
    return 0;
}
