#include <iostream>
#include <math.h>


using namespace std;

//perimetr(1)=6.28, perimetr(3, 4)=12.

double perimetr (double a, double b) {
    double perimetrTugriUchbur, gipatenuza;

    gipatenuza = sqrt(a*a+b*b);
    perimetrTugriUchbur = (a+b+gipatenuza);

    return perimetrTugriUchbur;
}

double perimetr (double a) {
    return (2*a*M_PI);
}

int main()
{
    double son1=3, son2=4;

    cout << "Radiusi " << son1 << " ga teng bo'lgan aylana uzunligi " << perimetr(son1) << " ga teng.\n";
    cout << "Katetlari " << son1 << " va " << son2 << " ga teng bo'lgan to'g'ri burchakli uchburchakning perimetri " << perimetr(son1, son2) << " ga teng.\n";

    cout << endl;
    return 0;
}
