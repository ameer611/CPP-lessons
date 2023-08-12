#include <iostream>

using namespace std;

//Masalan: power (5)=25, power(3, 4)=81.

double power (double a, double b) {
    double sum=a;
    for (int i=1; i<b; i++) {
            sum *=a;
    }
    return sum;
}

double power (double a) {
    return a*a;
}



int main()
{
    double son1=5, son2=3;

    cout << son1 << " sonining kvadrati " << power(son1) << " ga teng.\n";
    cout << son1 << " sonining " << son2 << " darajasi " << power(son1, son2) << " ga teng.\n";

    cout << endl;
    return 0;
}
