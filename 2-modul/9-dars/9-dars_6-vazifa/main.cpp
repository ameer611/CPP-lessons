#include <iostream>

using namespace std;

int main()
{
    // Satrlardan iborat massiv berilgan. Uzunlik jihatidan undagi eng qisqa so’zni va uning
    // uzunligini aniqlovchi dastur tuzing.

    cout << "Bu dastur, siz kiritgan satrlarni uzunlik jihatidan undagi eng qisqa so’zni va uning uzunligini aniqlaydi.\n\n";

    int n, minimal, uzun;
    string satr;

    cout << "Massivda nechta element bo'lishini xoxlaysiz?\n>>>";   cin >> n;

    string massiv [n];

    cin.ignore();

    for (int i=0; i<n; i++) {
        cout << "Massivning " << (i+1) << "-satrini kiriting: ";
        getline(cin, massiv[i]);
    }

    minimal = massiv[0].length();

    for (string element : massiv) {
        uzun = element.length();
        minimal = min(minimal, uzun);
         if (uzun == minimal) {
            satr = element;
         }
    }

    cout << "\nSiz kiritgan massiv satrlarining eng qisqasi " << satr << " so'zi va uning uzunligi " << minimal << " ta harfdan iborat.";






    cout << endl;
    return 0;
}
