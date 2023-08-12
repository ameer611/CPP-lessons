#include <iostream>

using namespace std;

int main()
{
    string s="Today is 25 th August, year is 2005", son=" ";


    for (int i=0; i<s.length(); i++) {

        if (isdigit(s[i])) {
            son+=s[i];
        }
    }

    cout << son << endl;

    cout << endl;
    return 0;
}
