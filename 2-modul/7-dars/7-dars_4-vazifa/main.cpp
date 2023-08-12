#include <iostream>

using namespace std;

int main()
{
    // s1 = “c++”, s2 = “code” bo’lsa, natija: “++ode”

    string a="sunday", b = "olam", result="", ulama;
    char c;

    cout << "1-so'zni kiriting:_";
    getline(cin, a);

    cout << "2-so'zni kiriting:_";
    getline(cin, b);

    cout << "Chiqarib tashlanishi kerak bo'lgan elementni kiritng:_";
    cin >> c;

    ulama= a.append(b);

    for (int i=0; i<=(a.length()+b.length())-1; i++ ) {
        if (c!=ulama[i]) {
            result= result + ulama[i];
        }
    }

    cout << result << endl;

    cout << endl;
    return 0;
}
