#include <iostream>

using namespace std;

int main()
{
    //Raqamlari yig’indisi 10 ga teng bo’lgan barcha 3 xonali natural sonlarni ekranga chiqaruvchi dastur tuzing.

    cout << "Bu dastur, raqamlari yig'indisi 10 ga teng bo’lgan barcha 3 xonali natural sonlarni ekranga chiqaradi.\n\n";

    for (int i=100; i<1000; i++) {

        int r1=i%10;
        int r100=i/100;
        int r10=(i%100)/10;

        if ((r1+r10+r100)==10) {
            cout << i << endl;
        }
    }

    cout << endl;
    return 0;
}
