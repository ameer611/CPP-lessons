#include <iostream>

using namespace std;

int main()
{
    // Masalan: str=”hello”, c=’a’ bo’lsa, natijaviy satr “haealalaoa” kabi bo’ladi.

    string str = "hello", c = "a", result = "";

    for (int i = 0; i<str.length(); i++) {
        result += str[i] + c;
    }

    cout << result;

    cout << endl;
    return 0;
}
