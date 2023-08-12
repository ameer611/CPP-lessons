#include <iostream>

using namespace std;

//Berilgan N natural sonining raqamlari yig'indisini rekursiv funksiya yordamida hisoblovchi dastur tuzing.

int sumdigit(int num) {
    if (num == 0){
        return 0;
    }
    if (num == 10) {
        return 1;
    }

    int result = num%10+ sumdigit(num/10);
    return result;
}

int main()
{
    int son=10157;

    cout << son << " sonining raqamlari yig'indisi " << sumdigit(son) << " ga teng.\n";

    cout << endl;
    return 0;
}
