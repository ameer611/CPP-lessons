#include <iostream>

using namespace std;

int main()
{
    cout << "Bu ikki sonning yig'indisini hisoblovchi dastur! \n\n";

    int birinchiSon;
    cout << "Birinchi sonni kiriting: \n-" ;
    cin >> birinchiSon ;

    float ikkinchiSon;
    cout <<"Ikkinchi sonni kiriting (hohlasangiz o'nlik son kiritishingiz mumkin): \n-";
    cin >> ikkinchiSon ;

    double sum = birinchiSon+ikkinchiSon;

    cout << birinchiSon<<" va "<< ikkinchiSon<< " sonlari yeg'indisi "<< sum<< "ga teng." << endl;

    return 0;
}
