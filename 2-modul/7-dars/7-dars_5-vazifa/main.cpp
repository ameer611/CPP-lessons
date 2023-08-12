#include <iostream>

using namespace std;

int main()
{
    // Masalan: s=“sunday” bo’lsa, natija: “unda”

    string a="Salom", result="";

    cout << "So'zni kiriting:_";
    getline(cin, a);

    a = a.erase(0, 1);
    result = a.erase(a.length()-1, 1);

    cout << result;

    cout << endl;
    return 0;
}
