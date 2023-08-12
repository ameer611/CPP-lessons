#include <iostream>

using namespace std;

bool tub(int n) {
  if (n <= 1) {
    return false;
  }
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

int main()
{
    // Natural sonlardan iborat N ta elementli massiv berilgan. Massivdagi tub sonlarni ekranga chiqaruvchi dastur tuzing.

    cout << "Bu dastur, massivdagi siz kiritgan tub sonlarni ekranga chiqaradi\n\n";

    int n, counter=0;
    bool tubSon=true;

    do {
        if (counter>0) {
            cout << "No'ldan katta son kiriting!!!\n\n";
        }

        cout << "Massivda nechta son bo'lishini xoxlaysiz?\n>>>";   cin >> n;
        counter++;
    }while(n<0);

    int massiv [n];

    for (int i=0; i<n; i++) {
            do {
                cout << "Massivning " << (i+1) << "-sonini kiriting: ";   cin >> massiv[i];

                if (massiv[i]<0) {
                    cout << "No'ldan katta son kiriting!!!\n";
                }
            }while(massiv[i]<0);
    }

    counter = 0;

    for (int element : massiv) {
        if (tub(element)) {
            cout << element << " soni tub son.\n";
            counter++;
        }
    }

    if (counter == 0) {
        cout << "\nSiz kiritgan sonlarning ichida bitta ham tub son yo'q.";
    }

    cout << endl;
    return 0;
}
