#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {

int meniuPasirinkimas;
int pazymiuSkaicius;
int pazymis;

string MokiniuVardai[100]; // mokiniu vardai
int Pazymiai[100][10]; // Visi pazymiai, pirmas sk - mokinio indeksas, antras sk - pazymio indeksas
int MokinioPazymiuSkaicius[100]; // kiek pazymiu turi kiekvienas mokinys
int mokiniuSkaicius = 0;

do {
cout << "Mokiniu pazymiu zurnalas" << endl;
cout << "========================" << endl;
cout << "1. Vardu ir pazymiu registravimas." << endl;
cout << "2. Peržiūrėti visu mokinių pazymius." << endl;
cout << "3. Peržiūrėti konkretaus mokinio pazymius." << endl;
cout << "4. Atnaujinti pazymi." << endl;
cout << "5. Apskaičiuoti mokinio pazymiu vidurki." << endl;
cout << "6. Pasalinti mokini." << endl;
cout << "7. Iseiti" << endl;
cout << " " << endl;

cout << "Pasirinkire veiksma:";
cin >> meniuPasirinkimas;

switch (meniuPasirinkimas)
{
case 1: {
    int atsakymasTaipNe;

    cout << "Vardu ir pazymiu registravimas" << endl;
    cout << "========================" << endl;

    do {
        if (mokiniuSkaicius >= 100) {
            cout << "Pasiektas maksimalus mokiniu skaicius." << endl;
            break;
        }

        cout << "Mokinio vardas: ";
        cin >> MokiniuVardai[mokiniuSkaicius];

        cout << "Kiek pazymiu norite ivesti (1-10)? ";
        cin >> pazymiuSkaicius;

        while (pazymiuSkaicius < 1 || pazymiuSkaicius > 10) {
            cout << "Iveskite skaiciu nuo 1 iki 10: ";
            cin >> pazymiuSkaicius;
        }

        MokinioPazymiuSkaicius[mokiniuSkaicius] = pazymiuSkaicius;

        for (int i = 0; i < pazymiuSkaicius; i++) {
            do {
                cout << "Iveskite " << i + 1 << " pazymi: ";
                cin >> pazymis;

                if (pazymis < 1 || pazymis > 10) {
                    cout << "Pazymis turi buti nuo 1 iki 10." << endl;
                }
            } while (pazymis < 1 || pazymis > 10);

            Pazymiai[mokiniuSkaicius][i] = pazymis;
        }

        mokiniuSkaicius++;

        cout << "Ar norite testi registravima?" << endl;
        cout << "1. Taip" << endl;
        cout << "2. Ne" << endl;
        cout << "Pasirinkite veiksma: ";
        cin >> atsakymasTaipNe;

    } while (atsakymasTaipNe == 1);

    break;
}

case 2:
    cout << "Visu mokiniu pazymiu sarasas" << endl;
    cout << "========================" << endl;
    break;

case 3:
    cout << "Konkretaus mokinio pazymiu peržiūrėjimas" << endl;
    cout << "========================" << endl;
    break;

case 4:
    cout << "Pazymio atnaujinimas" << endl;
    cout << "========================" << endl;
    break;

case 5:
    cout << "Mokinio pazymiu vidurkio skaiciavimas" << endl;
    cout << "========================" << endl;
    break;

case 6:
    cout << "Mokinio pasalinimas" << endl;
    cout << "========================" << endl;
    break;

case 7:
    cout << "Mokiniu pazymiu zurnalas uzdaromas...";
    break;

default:
    cout << "Neteisingas ivedimas." << endl;
    break;
}
}

    while (meniuPasirinkimas != 7);
}