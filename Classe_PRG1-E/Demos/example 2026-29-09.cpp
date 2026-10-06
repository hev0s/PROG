/**
 * @file example 2026-29-09.cpp
 * @author Niels Delafontaine
 * @date 29.09.2026
 * @brief Description du fichier
 */

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main() {
    float temp =24.5;
    bool beau = true;

    if (beau) {
        if (temp > 24) {
            cout << temp << " is greater than 24." << endl;
        }
        else if (true) {
            cout << "je vais au cinema" << endl;        }
    }


    int nbr = 2;
    cout << nbr << "personne";
    if (nbr >= 2)
        cout << "s" << endl;
    cout << endl;

    cout << nbr << "personne" << (nbr >= 2 ? "s" : "") << endl;

    int a = 3;
    int b = 5;
    int c = 4;
    cout << "max(a,b) = " << max(a,b) << endl;
    cout << "max(a,b) = " << ( a > b ? a : b) << endl;
    cout << "max(a,b,c) = " << (a > b ?
                             /*a > b*/  (a > c ? a : c) :
                             /*a <= b*/ (b > c ? b : c) )<< endl;
//    cout << (true ? 'a' : "oui") << endl;
    double resultat = a > b ? a : b;

    int jour = 5; // la valeur doit être connue à la compilation
    // pas possible de faire
    //  int cas = 4;
    cin >> jour; // demander à l'utilisateur

    switch (jour) {
        case 1 : cout << "lundi"    << endl; break;
        case 2 : cout << "mardi"    << endl; break;
        case 3 : cout << "mercredi"    << endl; break;
        case 4 : cout << "jeudi"    << endl; break;
        //case cas : cout << "jeudi"    << endl; break;
        case 5 : cout << "vendredi"    << endl; break;
        case 6 : cout << "samedi"    << endl; break;
        case 7 : cout << "dimanche"    << endl;
        default : cout << "??"    << endl;
    }
    return EXIT_SUCCESS;
}




