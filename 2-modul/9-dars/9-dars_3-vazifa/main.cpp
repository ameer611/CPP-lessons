#include <iostream>

using namespace std;

int main()
{
    // Haqiqiy sonlardan iborat N ta elementli massiv berilgan. Massivning eng kichik elementini aniqlovchi dastur tuzing.

    cout << "Bu dastur, siz kiritgan massiv elementlarining eng kichigini aniqlaydi\n\n ";

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

    cout << "\nSiz kiritgan massiv elementlarining eng kichigi " << minimal << " soni.";

    cout << endl;
    return 0;
}
