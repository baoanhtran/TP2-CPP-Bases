using namespace std;
#include <iostream>

int main() {
    cout << "1. Ajouter un trajet" << endl;
    cout << "2. Afficher les trajets" << endl;
    cout << "3. Rechercher un trajet" << endl;

    int choix;
    cin >> choix;

    if (choix == 1) {
        cout << "Ajouter un trajet" << endl;
    } else if (choix == 2) {
        cout << "Afficher les trajets" << endl;
    } else if (choix == 3) {
        cout << "Rechercher un trajet" << endl;
    } else {
        cout << "Choix invalide" << endl;
    }

    return 0;
}