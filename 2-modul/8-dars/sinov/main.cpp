#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string s = "antiqa", result = "";

    if (s.length()%2!=0) {
        int index = s.length()/2;
        result = s.substr(index, 1);
    }

    else {
        int index = s.length()/2-1;
        result = s.substr(index, 2);
    }

    cout << result;

    cout << endl;
    return 0;
}
