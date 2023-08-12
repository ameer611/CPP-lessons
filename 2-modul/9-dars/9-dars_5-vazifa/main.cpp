#include <iostream>

using namespace std;

int main()
{
    // 65-90 oraliqdagi butun sonlarni o’zida saqlovchi N ta elementli massiv berilgan.
    // ASCII kodi massiv elementlariga mos bo’lgan belgilarni ekranga chiqaruvchi dastur tuzing.

    int butunSonlar[26];
    int index=0;

    for (int i=65; i<=90; i++) {
            butunSonlar[index] = i;
            index++;
    }

    cout << "Massivning ASCII kodiga mos bo'lgan elementlari: ";

    for (float element : butunSonlar) {
        cout << (char)element << " ";
    }

    cout << endl;
    return 0;
}
