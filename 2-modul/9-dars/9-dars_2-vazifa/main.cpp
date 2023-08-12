#include <iostream>

using namespace std;

int main()
{
    // Butun sonlardan iborat N ta elementli massiv berilgan. Massivda nechta juft,
    // nechta toq son borligini aniqlovchi dastur tuzing.

    cout << "Bu dastur, siz kiritgan massiv elementlarida nechta juft, nechta toq son borligini aniqlaydi\n\n ";

    int n, counter=0, juftSon=0, toqSon=0;

    do {
        if (counter>0) {
            cout << "No'ldan katta son kiriting!!!\n";
        }

        cout << "Massivda nechta element bo'lishini xoxlaysiz?\n>>>";   cin >> n;
        counter++;
    }while(n<0);

    int massiv [n];

    for (int i=0; i<n; i++) {
        cout << "Massivning " << (i+1) << "-elementini kiriting: ";   cin >> massiv[i];
    }

    for (int element : massiv) {
        if (element%2 == 0) {
            juftSon++;
        }

        else {
            toqSon++;
        }
    }

    cout << "Massivda " << juftSon << " ta juft son, " << toqSon << " ta toq son mavjud.";

    cout << endl;
    return 0;
}
