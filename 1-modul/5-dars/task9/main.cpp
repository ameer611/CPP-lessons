#include <iostream>

using namespace std;

int main()
{
    cout << "Bu dastur, siz kiritgan uch xonali sonning chapdan birinchi raqamini o’chirib o’ng \
     tarafiga yozishdan hosil bo’lgan sonni aniqlovchi dastur.\n" << endl;

     int son;
     cout << "O'zingiz hohlagan uch xonali son kiriting: \n-";
     cin >> son;

     int r1 = son%10;
     float r2 = son/10;
     int natija = r1*100+r2;

     cout << "\nSiz kiritgan sonning natijasi "<< natija << " soniga teng. \n\n";
    return 0;

}
