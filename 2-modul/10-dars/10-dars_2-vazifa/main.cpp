#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    // N x M o�lchamdagi butun sonli massiv berilgan. Qaysi ustundagi elementlarning yig�indisi  eng kichik ekanligini aniqlang.

    srand(time(0));

    cout << "Bu dastur, siz kiritgan massivning eng kichik ustunni ekranga chiqaradi.\n\n";

    int n, m, counter=0, total=0, minimal;

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

    minimal=0;

    for (int j=0; j<m; j++) {
        total = 0;
        for (int i=0; i<n; i++) {
            total += massiv [i][j];
        }
        minimal=total;
        minimal=min(minimal, total);
        cout << (j+1) << "-ustun = " << total;
        cout << endl;
    }

    cout << "Yig'indisi eng kichik bo'lgan ustunning miqdori " << minimal << " ga teng.";


    cout << endl;
    return 0;
}
