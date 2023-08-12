#include <iostream>

using namespace std;

int main()
{
    cout << "Bu dastur, 1 dan N gacha bo’lgan juft va toq sonlarning yig’indisini alohida-alohida konsolga chiqaradi.\n";

    int son, toq=0, juft=0;

    cout << "N ni kiriting:_";  cin >> son;

    for (int  i =1; i<(son-1); i+=2) {
        toq +=i;
        }

    cout << "Toq sonlar yeg'indisi " << toq << " ga teng.\n";

    for (int  i =2; i<(son-1); i+=2) {
        juft +=i;
    }

    cout << "Juft sonlar yeg'indisi " << juft << " ga teng.\n";

    cout << endl;
    return 0;
}
