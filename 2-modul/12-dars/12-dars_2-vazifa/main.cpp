#include <iostream>
#include <time.h>

using namespace std;

void insertionSort(int arr[], int n) {
    int yordamchi, j;

    for (int i=1; i<n; i++) {
        yordamchi=arr[i];
        j=i-1;
        while (j>=0 && arr[j]<yordamchi) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]=yordamchi;
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

    insertionSort(massiv, arrSize);

    // massivning tartiblangan qiymatini ekranga chiqarish
    cout << "\nTartiblangan massiv: ";
    for (int i=0; i<arrSize; i++) {
        cout << massiv[i] << " ";
    }

    cout << endl;
    return 0;
}
