#include <iostream>

using namespace std;

int main()
{
    int son;
    cout << "Sonni kiriting: ";
    cin >> son;


    int i, j=1, a=1;

    for (i = 1; i <= son; i++) {

        while (j<=son) {
            cout<< j;
            j++;
        }

        j =(j+i) - son;

        cout << endl;
    }










    cout << endl;
    return 0;
}
