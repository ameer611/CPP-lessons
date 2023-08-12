#include <iostream>
#include <time.h>

using namespace std;

// teskari tartibda joylashgan yangi massivni natija sifatida qaytaruvchi funksiya

int *teskariMassiv(int arr[], int n) {
    int *arr2=new int [n];

    for (int i=n-1; i>=0; i--) {
        arr2[n-i-1]=arr[i];
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

    int * massiv = new int [arrSize];
    int * massiv2 = new int [arrSize];

    // massivni elementlar bilan to'ldirish
    for (int i=0; i<arrSize; i++) {
        // cout << "Massivning " << i << "-elementini kiriting: ";  cin >> massiv[i];
        int tasodif = (rand()%51);
        massiv[i]=tasodif;
    }

    // massiv elementlarini ekranga chiqarish
    cout << "\n1-array elementlari: ";

    for (int i=0; i<arrSize; i++) {
         cout << massiv [i] << " ";
    }

    massiv2 = teskariMassiv(massiv, arrSize);

    cout << "\n2-array elementlari: ";

    for (int i=0; i<arrSize; i++) {
         cout << massiv2 [i] << " ";
    }

    cout << endl;
    return 0;
}
