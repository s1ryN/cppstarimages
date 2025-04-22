#include <iostream>
using namespace std;

int main() {
    int height = 6;  // výška stromu (počet řad „větví“)

    // Horní část stromu (trojúhelník)
    for (int i = 0; i < height; ++i) {
        // nejprve mezery pro zarovnání doprava
        for (int j = 0; j < height - i; ++j) {
            cout << ' ';
        }
        // pak hvězdičky: 2*i+1 dává lichý počet pro symetrii
        for (int k = 0; k < 2 * i + 1; ++k) {
            cout << '*';
        }
        cout << '\n';
    }

    // Kmen stromu (dva řádky jedné hvězdičky vycentrované pod strom)
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < height; ++j) {
            cout << ' ';
        }
        cout << '*' << '\n';
    }

    int size = 8;

    for (int i = 0; i < size; ++i) {
        // V každém řádku vykreslíme 'size' hvězdiček
        for (int j = 0; j < size; ++j) {
            cout << "* ";
        }
        cout << '\n';
    }

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            // tiskneme hvězdičku jen na krajích (horní/spodní řada nebo levý/pravý sloupec)
            if (i == 0 || i == size - 1 || j == 0 || j == size - 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << '\n';
    }


    return 0;
}
