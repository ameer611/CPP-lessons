#include <iostream>

using namespace std;

int main()
{

    cout << " Bu dastur, ikki xonali son yig'indisini hisoblovchi dastur" << endl;
    float son1, son2, sum;

    cout <<"Birinchi sonni kiriting: \n-";
    cin >> son1;

    cout << "Ikkinchinchi sonni kiriting:\n-";
    cin >> son2;

    sum = son1 + son2;

    cout << son1<< " va "<< son2<< " sonlari yeg'indisi " << sum <<" ga teng" << endl;

    return 0;
}
