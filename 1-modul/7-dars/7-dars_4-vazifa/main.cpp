#include <iostream>

using namespace std;

int main()
{
    cout << "Bu dastur siz kiritgan ikkita sonni toq yoki yo'qmi shuni tekshiruvchi dasturdir.\n\n";

    int x, y;

    cout << "x sonni kiriting:_";
    cin >> x;

    cout << endl;

    cout << "y sonni kiriting:_";
    cin >> y;

    cout << endl;

    if (x%2!=0 && y%2==1) {
        cout << "x va y sonlari toq sonlardir";
    }
    else {
        cout << "Siz kiritgan sonning bittasi yoki ikkisi ham juft sondir.";
    }
    cout << endl ;

    cout << endl;
    return 0;
}
