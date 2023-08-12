#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float son;

    cout << "Sonni kiriting:_";
    cin >> son;

    float log = log10(son);
    int sonXonasi = ceil(log);

    cout << "Siz kiritgan son " << sonXonasi << " xonali ekan." << endl;

    cout << endl;
    return 0;
}
