#include <iostream>
#include <string.h>
#include <ctype.h>

using namespace std;

int printMenyu() {
    cout << "Taomlar ro'yhati:\n1. Osh - 20000  \t2. Sho'rva - 18000 \n3. Do'lma - 25000 \t4. Pitsa - 35000 \n\n";
}

int printIchimliklar() {
    cout << "\n\nIchimliklar ro'yhati:\n1. Ko'k choy - 1000  \t2. Limon sharbati - 4000 \n3. Qora choy - 2000 \t4. Apelsin sharbati - 5000 \n\n";
}


int main()
{
    // bu restoran uchun buyurtma oluvchi va hissoblab beruvchi dastur

    int counter=0, sum=0, taomRaqami, taomSoni, yanaBuyurtma=1, buyurtmaTekshiruv;

    int ovqatNarxlari[4] = {20000, 18000, 25000, 35000};
    string ovqatNomlari[4] = { "Osh", "Sho'rva", "Do'lma", "Pitsa" };

    int *taomBuyurtmalar = new int [4];
    int *taomMiqdori = new int [4];
    for (int i=0; i<4; i++) {
        taomBuyurtmalar[i]=0;
        taomMiqdori[i]=0;
    }


    cout << "\n       Assalomu alaykum. Restoranimizga xush kelibsiz!!!\n\n";


    // menyuni ekranga chiqarish
    printMenyu();


    // buyurtma olish
    while (yanaBuyurtma) {
            yanaBuyurtma=0;


        // qaysi taomni buyurtma berishini so'rash
        do {
            cout << "\nQaysi taomni buyurtma qilmoqchisiz?(1..4) \n>>>";  cin >> taomRaqami;

            switch (taomRaqami) {
                case 1: {
                    taomBuyurtmalar[0]=0;
                    }break;
                case 2: {
                    taomBuyurtmalar[1]=1;
                    }break;
                case 3: {
                    taomBuyurtmalar[2]=2;
                    }break;
                case 4: {
                    taomBuyurtmalar[3]=3;
                    }break;
                default: {
                    cout << "\n>>>Bunday raqamli taom yo'q, iltimos qayta tekshiring!!!<<<\n";
                    }break;
            }
        } while(taomRaqami<1 || taomRaqami>4);


        // nechta buyurtma bermoqchiligini so'rash
        counter=0;
        do {
            if (counter>0) {
                cout << "\n>>>Iltimos, no'ldan katta son kiriting!!!<<<\n\n";
            }
            cout << ovqatNomlari[taomRaqami-1] << "dan nechta buyurtma bermoqchisiz? \n>>>";    cin >> taomSoni;
            counter++;
        }while(taomSoni<=0);
        taomMiqdori[taomRaqami-1]+=taomSoni;



        // yana buyurtma berishni tekshirish
        counter=0;
        do {
            if (counter>0) {
                cout << "\n>>>Iltimos 1 va 0 raqamlaridan foydalaning!!!<<<\n";
            }
            cout << "\nAgar yana ovqat buyurtma bermoqchi bo'lsangiz 1 raqamini, aksincha bo'lsa, 0 ni kiriting.____";    cin >> buyurtmaTekshiruv;
            counter++;
        }while(buyurtmaTekshiruv<0 || buyurtmaTekshiruv>1);

        if (buyurtmaTekshiruv==1) {
            yanaBuyurtma++;
        }
    }


    int ichimlikRaqami, ichimlikSoni;

    int ichimlikNarxlari[4] = {1000, 4000, 2000, 5000};
    string ichimlikNomlari[4] = { "Ko'k choy", "Limon sharbati", "Qora choy", "Apelsin sharbati" };

    int *ichimlikBuyurtmalar = new int [4];
    int *ichimlikMiqdori = new int [4];
    for (int i=0; i<4; i++) {
        ichimlikBuyurtmalar[i]=0;
        ichimlikMiqdori[i]=0;
    }

     printIchimliklar();


    yanaBuyurtma=1;
    while (yanaBuyurtma) {
            yanaBuyurtma=0;


        // ichimlik buyurtma berish
        do {
            cout << "\nQaysi ichimlikni buyurtma qilmoqchisiz?(1..4) \n>>>";  cin >> ichimlikRaqami;

            switch (ichimlikRaqami) {
                case 1: {
                    ichimlikBuyurtmalar[0]=0;
                    }break;
                case 2: {
                    ichimlikBuyurtmalar[1]=1;
                    }break;
                case 3: {
                    ichimlikBuyurtmalar[2]=2;
                    }break;
                case 4: {
                    ichimlikBuyurtmalar[3]=3;
                    }break;
                default: {
                    cout << "\n>>>Bunday raqamli ichimlik yo'q, iltimos qayta tekshiring!!!<<<\n";
                    }break;
            }
        } while(ichimlikRaqami<1 || ichimlikRaqami>4);


        // nechta buyurtma bermoqchiligini so'rash
        counter=0;
        do {
            if (counter>0) {
                cout << "\n>>>Iltimos, no'ldan katta son kiriting!!!<<<\n\n";
            }
            cout << ichimlikNomlari[ichimlikRaqami-1] << "dan nechta buyurtma bermoqchisiz? \n>>>";    cin >> ichimlikSoni;
            counter++;
        }while(ichimlikSoni<=0);

        ichimlikMiqdori[ichimlikRaqami-1]+=ichimlikSoni;

        // yana buyurtma berishni tekshirish
        counter=0;
        do {
            if (counter>0) {
                cout << "\n>>>Iltimos 1 va 0 raqamlaridan foydalaning!!!<<<\n";
            }
            cout << "\nAgar yana ichimlik buyurtma bermoqchi bo'lsangiz 1 raqamini, aksincha bo'lsa, 0 ni kiriting.____";    cin >> buyurtmaTekshiruv;
            counter++;
        }while(buyurtmaTekshiruv<0 || buyurtmaTekshiruv>1);

        if (buyurtmaTekshiruv==1) {
            yanaBuyurtma++;
        }
    }





    // chek chiqarish
    cout << "\n=========================CHEK=========================\n\n";


    for (int i=0; i<4; i++) {
        int buyurtmaRaqami = taomBuyurtmalar[i];
        sum += taomMiqdori[i]*ovqatNarxlari[buyurtmaRaqami];
        if (taomMiqdori[i]!=0) {
            cout << ovqatNomlari[buyurtmaRaqami] << "        \t\t\t " << taomMiqdori[i] << " * " << ovqatNarxlari[buyurtmaRaqami] << endl;
        }
    }


    for (int i=0; i<4; i++) {
        int buyurtmaRaqami = ichimlikBuyurtmalar[i];
        sum += ichimlikMiqdori[i]*ichimlikNarxlari[buyurtmaRaqami];
        if (ichimlikMiqdori[i]!=0) {
            cout << ichimlikNomlari[buyurtmaRaqami] << "        \t\t\t " << ichimlikMiqdori[i] << " * " << ichimlikNarxlari[buyurtmaRaqami] << endl;
        }
    }


    cout << "\n______________________________________________________\n";
    cout << "JAMI: ------------------------------- " << sum << endl;
    cout << "======================================================\n";

    cout << endl;
    return 0;
}
