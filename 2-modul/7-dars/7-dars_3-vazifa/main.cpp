#include <iostream>

using namespace std;

int main()
{
    // Masalan: s=”sunday”, natija: “daysun”

    string a="sunday", result="";

    do {
        cout << "So'zni kiriting:_";
        getline(cin, a);
    }while(a.length()%2!=0);

    cout << endl;

    int uzun = a.length()/2;

    result = result.assign(a, uzun, a.length() );
    result = result.append(a, 0, uzun);

    cout << result;

    cout << endl;
    return 0;
}
