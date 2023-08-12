#include <iostream>
#include <time.h>

using namespace std;

int shans = 3;

void sonTopish (int son) {
    int taxmin;

    cout << "Taxminingizni kiriting:_";     cin >> taxmin;

    shans -= 1;

    if (taxmin == son) {
        cout << "Siz topdingiz!!!\n";
        return;
    }
    else if (shans==0) {
        cout << "Imkoniyatingiz tugadi.";
        return;
    }
    else {
        cout << "Siz topa olmadingiz.\n";\
    }
    sonTopish(son);

}

int main()
{
    srand(time(NULL));

    cout << "Son topish o'yini!!! \n\n";

    int son = rand()%10+1;

    cout << "Kompyuter bir son o'yladi (1...10). Sizda uchta imkoniyat bor.\n" << son << endl;

    sonTopish(son);

    cout << endl;
    return 0;
}
