#include <iostream>

using namespace std;

//Masalan: calculate (5, 6)=11, calculate (3, 4, 5)=60.

double calculate (double a, double b) {
    return a+b;
}

double calculate (double a, double b, double c) {
    return a*b*c;
}

int main()
{
    double son1=5, son2=3, son3=8;

    cout << son1 << ", " << son2 << " va " << son3 << " sonlari ko'paytmasi " << calculate(son1, son2, son3) << " ga teng.\n";
    cout << son1 << " va " << son2 << " sonlari yig'indisi " << calculate(son1, son2) << " ga teng.\n";

    cout << endl;
    return 0;
}
