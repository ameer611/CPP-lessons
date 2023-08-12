#include <iostream>

using namespace std;

int main()
{
    // Masalan: s=”C++ ni muvaffaqiyatli o’rganish” bo’lsa, natija: ‘+’, ‘f’

    string a="Salom", result="";

    cout << "So'zni kiriting:_";
    getline(cin, a);

    for (int i=0; i<=a.length()-1; i++) {
        if (a[i]==a[i-1]) {
            result += a[i];
        }
    }

    cout << result;

    cout << endl;
    return 0;
}
