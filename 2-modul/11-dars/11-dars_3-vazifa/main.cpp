#include <iostream>
#include <time.h>

using namespace std;

// ko�rsatilgan sohadagi elementlar yig�indisini natija sifatida qaytaruvchi funksiya yozing

int sumX (int **arr, int qator) {
    int sum=0, m=qator, markaz=qator/2;

    for (int i=0; i<qator; i++) {
        sum += arr [i][i];
    }

    if (qator%2 == 0) {
        for (int i=0; i<qator && m>=0; i++) {
            sum += arr [i][m-1];
            m--;
        }
    }

    else {
        for (int i=0; i<qator && m>=0; i++) {
            sum += arr [i][m-1];
            m--;
        }
    sum -= arr[markaz] [markaz];
    }

    return sum;
}

int main()
{
    srand(time(0));

    int n, counter=0;

    do {
        if (counter>0) {
            cout << "No'ldan katta son kiriting!!!\n\n";
        }
        cout << "Bu massivda nechta qator va ustun bo'lishini xoxlaysiz: ";      cin >> n;
        counter++;
    }while(n<=0);


    // massivga xotiradan joy ajratish
    int ** massiv = new int * [n];
    for (int i=0; i<n; i++) {
        massiv[i] = new int [n];
    }

    // massiv elementlarini to'ldirish
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            // cout << "Massivning " << (i+1) << "-qatorining, " << (j+1) << "-elementini kiriting: ";    cin >> massiv [i][j];
            massiv [i][j] = rand()%101;
        }
    }

    // massiv elementlarini ekranga chiqarish
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            // cout << "Massivning " << (i+1) << "-qatorining, " << (j+1) << "-elementi: " << massiv [i][j] << endl;
            cout << massiv [i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl;

    cout << "Natija: " << sumX(massiv, n);

    cout << endl;
    return 0;
}
