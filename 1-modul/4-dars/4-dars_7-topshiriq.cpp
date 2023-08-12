#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
    cout << "Bu dastur, siz kiritgan ASCII kodni, aynan o'sha kodga teng \
bo'lgan belgiga o'zgartirib beradi." << endl << endl;


    int son;
    char ixtiyoriyOzgaruvchi;
    cout << "O'zingiz istagan, 97 dan 122 gacha bo'lgan sonni kiriting: \n-" ;
    cin>> son;


    ixtiyoriyOzgaruvchi = static_cast<char>(son);
    cout <<"Siz kiritgan ASCII kodining belgisi "<< ixtiyoriyOzgaruvchi<< " ga teng.\n\n";


    return 0;
}
