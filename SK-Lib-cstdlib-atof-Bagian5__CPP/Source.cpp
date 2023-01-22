#include <iostream>
#include <cstdlib>
#include <conio.h>

/*
    Source by Programiz (https://www.programiz.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

using namespace std;

int main() {
    cout << "25.5" << " to Double = " << atof("  25.5") << endl;
    cout << "25.5    " << " to Double = " << atof("  25.5   ") << endl;
    cout << "25.5abcd" << " to Double = " << atof("25.5abcd") << endl;

    // Mengembalikan 0 karena konversi tidak valid
    cout << "abcd25.5" << " to Double = " << atof("abcd25.5") << endl;

    // Aturan spasi putih dan karakter tambahan juga berlaku untuk infinity dan Nan
    cout << "INFINITYabcd" << " to Double = " << atof("INFINITYabcd") << endl;
    cout << "INFINITY" << " to Double = " << atof("  INFINITY") << endl;
    cout << "Nanlll" << " to Double = " << atof("Nanlll") << endl;

    _getch();
    return 0;
}