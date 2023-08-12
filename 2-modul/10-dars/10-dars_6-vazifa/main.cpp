#include <iostream>
#include <time.h>

using namespace std;

int main()
{
     // N x N o’lchamdagi butun sonli massiv berilgan. Undagi ajratib ko’rsatilgan sohadagi elementlar yig’indisini aniqlang

    srand(time(0));

    int n, counter=0, sum=0;

    do {
        if (counter>0) {
            cout << "No'ldan katta son kiriting!!!\n\n";
        }
        cout << "Bu massivda nechta qator va ustun bo'lishini xoxlaysiz: ";      cin >> n;
        counter++;
    }while(n<=0);

    int massiv [n][n];

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            // cout << "Massivning " << (i+1) << "-qatorining, " << (j+1) << "-elementini kiriting: ";    cin >> massiv [i][j];
            massiv [i][j] = rand()%101;
        }
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            // cout << "Massivning " << (i+1) << "-qatorining, " << (j+1) << "-elementi: " << massiv [i][j] << endl;
            cout << massiv [i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl;

    for (int i=0; i<n; i++) {
        sum += massiv [n-1][i];
    }

    for (int i=0; i<n-1; i++) {
        sum += massiv [i][0]+massiv [i][n-1];
    }

    cout << sum;

    cout << endl;
    return 0;
}
