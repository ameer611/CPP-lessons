#include <iostream>
#include <time.h>

using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i=0; i<n-1; i++) {
        for (int j=0; j<n-1-i; j++) {
            if (arr[j]<arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main()
{
    srand(time(0));

    int arrSize, counter=0;

    // massivning hajmini olish
    do {
        if (counter>0) {
            cout << "No'ldan katta son kiriting!!!\n";
        }

        cout << "Massivni nechta elementdan iborat bo'lishini xohlaysiz: ";     cin >> arrSize;
        counter++;
    } while (arrSize<=0);

    int massiv [arrSize];

    // massiv elementlarini to'ldirish
    for (int i=0; i<arrSize; i++) {
        massiv[i]=rand()%101;
        // cout << "Massivning " << i+1 << "-elementini kiriting: ";   cin >> massiv[i];
    }

    // massivning asl qiymatini ekranga chiqarish
    cout << "Haqiqiy massiv: ";
    for (int i=0; i<arrSize; i++) {
        cout << massiv[i] << " ";
    }

    bubbleSort(massiv, arrSize);

    // massivning tartiblangan qiymatini ekranga chiqarish
    cout << "\nTartiblangan massiv: ";
    for (int i=0; i<arrSize; i++) {
        cout << massiv[i] << " ";
    }

    cout << endl;
    return 0;
}

