#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {

int meniuPasirinkimas;

string Mokiniai[100];
int Pazymiai [100][10];

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
case 1:
    cout << "Vardu ir pazymiu registravimas" << endl;
    cout << "========================" << endl;
    break;

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