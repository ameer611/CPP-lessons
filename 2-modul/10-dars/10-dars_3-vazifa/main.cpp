#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    // N x M o’lchamdagi butun sonli massiv berilgan. Undagi eng kichik elementni aniqlang.

    srand(time(0));

    cout << "Bu dastur, siz kiritgan massivning eng kichik elementini ekranga chiqaradi.\n\n";

    int n, m, counter=0, minimal;

    do {
        if (counter>0) {
            cout << "No'ldan katta son kiriting!!!\n\n";
        }
        cout << "Bu massivda nechta qator bo'lishini xoxlaysiz: ";      cin >> n;
        counter++;
    }while(n<=0);

    counter=0;

    do {
        if (counter>0) {
            cout << "No'ldan katta son kiriting!!!\n\n";
        }
        cout << "Bu massivda nechta ustun bo'lishini xoxlaysiz: ";      cin >> m;
        counter++;
    }while(n<=0);

    int massiv [n][m];

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            // cout << "Massivning " << (i+1) << "-qatorining, " << (j+1) << "-elementini kiriting: ";    cin >> massiv [i][j];
            massiv [i][j] = rand()%101;
        }
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            // cout << "Massivning " << (i+1) << "-qatorining, " << (j+1) << "-elementi: " << massiv [i][j] << endl;
            cout << massiv [i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl;

    minimal=massiv [0][0];

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            minimal = min(minimal, massiv[i][j]);
        }
    }

    cout << "Yig'indisi eng kichik element miqdori " << minimal << " ga teng.";


    cout << endl;
    return 0;
}
