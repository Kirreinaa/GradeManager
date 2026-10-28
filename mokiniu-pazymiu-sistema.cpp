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
cout << " " << endl;
cout << "========================" << endl;
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

    cout << " " << endl;
    cout << "========================" << endl;
    cout << "Vardu ir pazymiu registravimas" << endl;
    cout << "========================" << endl;
    cout << " " << endl;

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

        cout << " " << endl;
        cout << "========================" << endl;
        cout << "Ar norite testi registravima?" << endl;
        cout << "========================" << endl;
        cout << "1. Taip" << endl;
        cout << "2. Ne" << endl;
        cout << " " << endl;
        cout << "Pasirinkite veiksma: ";
        cin >> atsakymasTaipNe;

    } while (atsakymasTaipNe == 1);

    break;
}

case 2:
    cout << " " << endl;
    cout << "========================" << endl;
    cout << "Visu mokiniu pazymiu sarasas" << endl;
    cout << "========================" << endl;
    cout << " " << endl;

    if (mokiniuSkaicius == 0) {
        cout << "Mokiniu sarasas yra tuscias." << endl;
    }

    if (mokiniuSkaicius > 0){
        for (int i = 0; i < mokiniuSkaicius; i++) {
        cout << "Mokinio " << MokiniuVardai[i] << " pazymiai:" << endl;
        cout << "========================" << endl;
            for (int j = 0; j < MokinioPazymiuSkaicius[i]; j++){
            cout << Pazymiai[i][j] << endl;
            }
        }
    }
    break;

case 3: {
    int mokinioNumeris;
    int kartoti = 1;

    cout << " " << endl;
    cout << "========================" << endl;
    cout << "Konkretaus mokinio pazymiu peržiūrėjimas" << endl;
    cout << "========================" << endl;
    cout << " " << endl;

    if (mokiniuSkaicius == 0) {
        cout << "Mokiniu sarasas yra tuscias." << endl;
        break;
    }

    while (kartoti == 1) {
        cout << "Iveskite mokinio numeri: ";
        cin >> mokinioNumeris;

        if (mokinioNumeris < 1 || mokinioNumeris > mokiniuSkaicius) {
            cout << "Neteisingas mokinio numeris. Iveskite skaiciu nuo 1 iki " << mokiniuSkaicius << "." << endl;
            cout << "1. Bandyti dar karta" << endl;
            cout << "2. Grizti i meniu" << endl;
            cout << "Pasirinkite veiksma: ";
            cin >> kartoti;
        }
        else {
            cout << " " << endl;
            cout << "========================" << endl;
            cout << MokiniuVardai[mokinioNumeris - 1] << endl;
            cout << "========================" << endl;
            cout << "Mokinio pazymiai:" << endl;
            cout << "========================" << endl;
            for (int j = 0; j < MokinioPazymiuSkaicius[mokinioNumeris - 1]; j++) {
                cout << Pazymiai[mokinioNumeris - 1][j] << endl;
            }
            kartoti = 0;
        }
    }
    break;
}

case 4: {
    int mokinioNumeris;
    int pazymioNumeris;
    int kartoti = 1;

    cout << " " << endl;
    cout << "========================" << endl;
    cout << "Pazymio atnaujinimas" << endl;
    cout << "========================" << endl;
    cout << " " << endl;

    if (mokiniuSkaicius == 0) {
        cout << "Mokiniu sarasas yra tuscias." << endl;
        break;
    }

    while (kartoti == 1) {
        cout << "Iveskite mokinio numeri: ";
        cin >> mokinioNumeris;

        if (mokinioNumeris < 1 || mokinioNumeris > mokiniuSkaicius) {
            cout << "Neteisingas mokinio numeris. Iveskite skaiciu nuo 1 iki " << mokiniuSkaicius << "." << endl;
            cout << "1. Bandyti dar karta" << endl;
            cout << "2. Grizti i meniu" << endl;
            cout << "Pasirinkite veiksma: ";
            cin >> kartoti;
        }
        else {
            cout << "Iveskite pazymio numeri: ";
            cin >> pazymioNumeris;

            if (pazymioNumeris < 1 || pazymioNumeris > MokinioPazymiuSkaicius[mokinioNumeris - 1]) {
                cout << "Neteisingas pazymio numeris. Iveskite skaiciu nuo 1 iki " << MokinioPazymiuSkaicius[mokinioNumeris - 1] << "." << endl;
                cout << "1. Bandyti dar karta" << endl;
                cout << "2. Grizti i meniu" << endl;
                cout << "Pasirinkite veiksma: ";
                cin >> kartoti;
            }
            else {
                do {
                    cout << "Iveskite nauja pazymi: ";
                    cin >> pazymis;

                    if (pazymis < 1 || pazymis > 10) {
                        cout << "Pazymis turi buti nuo 1 iki 10." << endl;
                    }
                } while (pazymis < 1 || pazymis > 10);

                Pazymiai[mokinioNumeris - 1][pazymioNumeris - 1] = pazymis;
                cout << "Pazymys atnaujintas." << endl;
                kartoti = 0;
            }
        }
    }
    break;
}

case 5: {
    int mokinioNumeris;
    int kartoti = 1;
    int suma;
    double vidurkis;

    cout << " " << endl;
    cout << "========================" << endl;
    cout << "Mokinio pazymiu vidurkio skaiciavimas" << endl;
    cout << "========================" << endl;
    cout << " " << endl;

    if (mokiniuSkaicius == 0) {
        cout << "Mokiniu sarasas yra tuscias." << endl;
        break;
    }

    while (kartoti == 1) {
        cout << "Iveskite mokinio numeri: ";
        cin >> mokinioNumeris;

        if (mokinioNumeris < 1 || mokinioNumeris > mokiniuSkaicius) {
            cout << "Neteisingas mokinio numeris. Iveskite skaiciu nuo 1 iki " << mokiniuSkaicius << "." << endl;
            cout << "1. Bandyti dar karta" << endl;
            cout << "2. Grizti i meniu" << endl;
            cout << "Pasirinkite veiksma: ";
            cin >> kartoti;
        }
        else {
            if (MokinioPazymiuSkaicius[mokinioNumeris - 1] == 0) {
                cout << "Sis mokinys pazymiu neturi." << endl;
            }
            else {
                suma = 0;
                for (int j = 0; j < MokinioPazymiuSkaicius[mokinioNumeris - 1]; j++) {
                    suma = suma + Pazymiai[mokinioNumeris - 1][j];
                }
                vidurkis = (double)suma / MokinioPazymiuSkaicius[mokinioNumeris - 1];
                cout << MokiniuVardai[mokinioNumeris - 1] << " pazymiu vidurkis: " << fixed << setprecision(2) << vidurkis << endl;
            }
            kartoti = 0;
        }
    }
    break;
}

case 6: {
    int mokinioNumeris;
    int kartoti = 1;

    cout << " " << endl;
    cout << "========================" << endl;
    cout << "Mokinio pasalinimas" << endl;
    cout << "========================" << endl;
    cout << " " << endl;

    if (mokiniuSkaicius == 0) {
        cout << "Mokiniu sarasas yra tuscias." << endl;
        break;
    }

    while (kartoti == 1) {
        cout << "Iveskite mokinio numeri: ";
        cin >> mokinioNumeris;

        if (mokinioNumeris < 1 || mokinioNumeris > mokiniuSkaicius) {
            cout << "Neteisingas mokinio numeris. Iveskite skaiciu nuo 1 iki " << mokiniuSkaicius << "." << endl;
            cout << "1. Bandyti dar karta" << endl;
            cout << "2. Grizti i meniu" << endl;
            cout << "Pasirinkite veiksma: ";
            cin >> kartoti;
        }
        else {
            for (int i = mokinioNumeris - 1; i < mokiniuSkaicius - 1; i++) {
                MokiniuVardai[i] = MokiniuVardai[i + 1];
                MokinioPazymiuSkaicius[i] = MokinioPazymiuSkaicius[i + 1];
                for (int j = 0; j < 10; j++) {
                    Pazymiai[i][j] = Pazymiai[i + 1][j];
                }
            }
            mokiniuSkaicius--;
            cout << "Mokinys pasalintas." << endl;
            kartoti = 0;
        }
    }
    break;
}

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