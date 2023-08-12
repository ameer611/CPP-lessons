#include <iostream>
#include <time.h>
#include <math.h>

using namespace std;

// Haqiqiy sonlardan iborat N ta elementli massiv berilgan. Ushbu massivni parametr sifatida qabul qilib,
// uning eng katta elementini natija sifatida qaytaruvchi funksiya yozing.

float findmak (float * arr, int n) {

    float mak = arr[0];

    for (int i=0; i<n; i++) {
        mak = max(mak, arr[i]);
    }
    return mak;
}

int main()
{
    srand(time(NULL));

    int counter=0, arrSize;

    do {
        if (counter>0) {
            cout << "No'ldan katta son kiriting!!!\n\n";
        }
        cout << "Bu massivda nechta qator va ustun bo'lishini xoxlaysiz: ";      cin >> arrSize;
        counter++;
    }while(n<=0);

    float * massiv = new float [arrSize];

    // massivni elementlar bilan to'ldirish
    for (int i=0; i<arrSize; i++) {
        // cout << "Massivning " << i << "-elementini kiriting: ";  cin >> massiv[i];
        float tasodif = (rand()%51)*M_PI;
        massiv[i]=tasodif;
    }


    // massiv elementlarini ekranga chiqarish
    cout << "\nArray elementlari: ";

    for (int i=0; i<arrSize; i++) {
         cout << massiv [i] << " ";
    }


    // funksiyadan foydalanib eng katta qiymatni topish
    float mak1 = findmak(massiv, arrSize);

    cout << "\n\nSiz kiritgan sonlarning eng kattasi " << mak1 << " ga teng.\n";

    cout << endl;
    return 0;
}
