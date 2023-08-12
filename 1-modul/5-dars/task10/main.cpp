#include <iostream>

using namespace std;

int main()
{
    cout << "Bu dastur, kun boshidan boshlab qancha soat, minut, sekund o’tganini hisoblovchi dasturdir." << endl << endl;

    int n;  //n = kiritilgan soniya
    cout << "Kun boshidan boshlab qancha soniya o'tganini kiriting: \n-";
    cin >> n;

    int soat = n/3600;
    int r1 = n-soat*3600;
    int minut = r1/60;
    int soniya = r1-minut*60;


    cout << "\nKun boshidan boshlab " << soat << " soat, " << minut << " minut, "<< soniya<< " soniya o'tgan." << endl << endl;
    return 0;
}
