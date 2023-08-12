#include <iostream>

using namespace std;

int main()
{
    cout << "Bu dastur, barcha musbat 3 xonali juft sonlar yig'indisini hisoblaydi.\n\n";

    int sum=0;

    for (int i=100; i<1000; i+=2) {
        sum=sum+i;
    }

    cout << "Barcha musbat 3 xonali juft sonlar yig'indisi " << sum << " ga teng.";

    cout << endl;
    return 0;
}
