#include <iostream>

using namespace std;

int main()
{
    cout << "Bu dastur siz kiritgan uchta sonni o'sib borish tartibida kitilganmi yoki yo'qmi shuni tekshiruvchi dasturdir.\n\n";

    float son1, son2, son3;

    cout << "1-sonni kiriting:_";
    cin >> son1;

    cout << endl;

    cout << "2-sonni kiriting:_";
    cin >> son2;

    cout << endl;

    cout << "3-sonni kiriting:_";
    cin >> son3;

    bool sinov = (son1<son2)&&(son2<son3);

    cout << endl;

    cout << sinov;

    cout << endl;
    return 0;
}
