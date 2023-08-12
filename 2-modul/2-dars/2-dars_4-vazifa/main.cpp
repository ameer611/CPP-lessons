#include <iostream>

using namespace std;

int main()
{
    cout << "Bu dastur, 1 dan 1000 gacha oraliqdagi mukammal sonlarni  ekranga chiqaradi.\n";

    int son, sum;

    cout << endl;

    for (son = 1; son <= 1000; son++) {
        sum = 0;
        for (int i = 1; i <= son / 2; i++) {
            if (son % i == 0) {
                sum += i;
        }
    }

        if (sum == son) {
        cout << son << " murakkab sondir." << endl;
        }
    }

  return 0;

}
