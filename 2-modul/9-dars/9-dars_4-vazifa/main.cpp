#include <iostream>

using namespace std;

int main()
{
    // Haqiqiy sonlardan iborat N ta elementli massiv berilgan.
    // Massivning eng kichik elementi unda necha marta qatnashganini aniqlovchi dastur tuzing.

    cout << "Bu dastur, siz kiritgan massiv elementlarining eng kichigini necha marta qatnashganini aniqlaydi\n\n ";

    int n, counter=0;
    float minimal;

    do {
        if (counter>0) {
            cout << "No'ldan katta son kiriting!!!\n";
        }

        cout << "Massivda nechta element bo'lishini xoxlaysiz?\n>>>";   cin >> n;
        counter++;
    }while(n<0);

    float massiv [n];

    for (int i=0; i<n; i++) {
        cout << "Massivning " << (i+1) << "-elementini kiriting: ";   cin >> massiv[i];
    }

    minimal = massiv[0];

    for (float element : massiv) {
        minimal = min(minimal, element);
    }

    counter = 0;

    for (float element : massiv) {
        if (minimal == element) {
            counter++;
        }
    }

    cout << "\nSiz kiritgan massiv elementlarining eng kichigi " << minimal << " soni, " << counter << " marta takrorlangan.";

    cout << endl;
    return 0;
}
