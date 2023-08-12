#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout << "Bu dastur, burchak o'lchovi gradusda kiritilganda, shu burchakning sinusi, cosinusi, tangensini hisoblaydi.\n";

    int gradus;
    cout << "Gradusni kiriting:_";  cin >> gradus;

    cout << "\nSiz kiritgan gradusning sinusi " << sin(gradus*M_PI/180) << " ga teng.";
    cout << "\nSiz kiritgan gradusning kosinusi " << cos(gradus*M_PI/180) << " ga teng.";
    cout << "\nSiz kiritgan gradusning tangensi " << tan(gradus*M_PI/180) << " ga teng.";

    cout << endl;
    return 0;
}
