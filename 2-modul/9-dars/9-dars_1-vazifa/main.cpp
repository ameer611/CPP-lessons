#include <iostream>

using namespace std;

int main()
{
    //Haqiqiy sonlardan iborat N ta elementli massiv berilgan. Massiv elementlarining yig’indisini hisoblovchi dastur

    cout << "Bu dastur, siz kiritgan massiv elementlarining yig'indisini hisoblaydi.\n\n ";

    int n, counter=0;
    float sum=0;

    do {
        if (counter>0) {
            cout << "No'ldan katta son kiriting!!!\n";
        }

        cout << "Massivda nechta element bo'lishini xoxlaysiz?\n>>>";   cin >> n;
        counter++;
    }while(n<0);

    float massiv[n];

    for (int i=0; i<n; i++) {
        cout << "Massivning " << (i+1) << "-elementini kiriting: ";   cin >> massiv[i];
        sum += massiv[i];
    }

    cout << "Massivning elementlari: ";

    for (float element : massiv) {
        cout << element << " ";
    }

    cout << "\nMassiv elementlarining yig'indisi " << sum << " ga teng.\n";

    cout << endl;
    return 0;
}
