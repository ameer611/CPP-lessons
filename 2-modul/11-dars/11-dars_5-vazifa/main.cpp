#include <iostream>
#include <time.h>
#include <math.h>

using namespace std;

// massiv elementlarining kvadratlarini o’zida saqlovchi yangi
// massivni hosil qilib, uni natija sifatida qaytaruvchi funksiya yozing.

float *kvadratMassiv(float arr[], int n) {
    float *arr2=new float [n];

    for (int i=0; i<n; i++) {
        arr2[i]=(arr[i]*arr[i]);
    }
    return arr2;
}

int main()
{
    srand(time(NULL));

    int counter=0, arrSize;

    do {
        if (counter>0) {
            cout << "No'ldan katta son kiriting!!!\n\n";
        }
        cout << "Massivning hajmini kiriting: ";      cin >> arrSize;
        counter++;
    }while(arrSize<=0);

    float * massiv = new float [arrSize];
    float * massiv2 = new float [arrSize];

    // massivni elementlar bilan to'ldirish
    for (int i=0; i<arrSize; i++) {
        cout << "Massivning " << i+1 << "-elementini kiriting: ";  cin >> massiv[i];
        // float tasodif = (rand()%51*M_PI);
        // massiv[i]=tasodif;
    }

    // massiv elementlarini ekranga chiqarish
    cout << "\n1-array elementlari: ";

    for (int i=0; i<arrSize; i++) {
         cout << massiv [i] << " \t";
    }

    massiv2 = kvadratMassiv(massiv, arrSize);

    cout << "\n2-array elementlari: ";

    for (int i=0; i<arrSize; i++) {
         cout << massiv2 [i] << " \t";
    }

    cout << endl;
    return 0;
}
